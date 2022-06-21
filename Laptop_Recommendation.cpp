#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
using namespace std;
#define MIN_BALANCE 500
class InsufficientFunds{};
class Account
{
private:
long account_Number;
string firstName;
string lastName;
float balance;
static long Next_Account_Number;
public:
Account(){}
Account(string fname,string lname,float balance);
long getAccNo(){return account_Number;}
string getFirstName(){return firstName;}
string getLastName(){return lastName;}
float getBalance(){return balance;}
void Deposit(float amount);
void Withdraw(float amount);
static void setLastaccount_Number(long account_Number);
static long getLastaccount_Number();
friend ofstream & operator<<(ofstream &ofs,Account &acc);
friend ifstream & operator>>(ifstream &ifs,Account &acc);
friend ostream & operator<<(ostream &os,Account &acc);
};
long Account::Next_Account_Number=0;
class Bank
{
private:
map<long,Account> accounts;
public:
Bank();
Account OpenAccount(string fname,string lname,float balance);
Account Balance_Enquiry(long account_Number);
Account Deposit(long account_Number,float amount);
Account Withdraw(long account_Number,float amount);
void CloseAccount(long account_Number);
void ShowAllAccounts();
~Bank();
};
int main()
{
Bank b;
Account acc;
int choice;
string fname,lname;

long account_Number;
float balance;
float amount;
cout<<" The Banking System"<<endl;
do
{
cout<<"\n\tSelect one option below ";
cout<<"\n\t1 Open an Account";
cout<<"\n\t2 Balance the Enquiry";
cout<<"\n\t3 Deposit Money";
cout<<"\n\t4 Withdrawal Money";
cout<<"\n\t5 Close an Account";
cout<<"\n\t6 Show All Accounts";
cout<<"\n\t7 Quit";
cout<<"\nEnter your choice: ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter First Name: ";

cin>>fname;
cout<<"Enter Last Name: ";
cin>>lname;
cout<<"Enter initil Balance: ";
cin>>balance;

acc=b.OpenAccount(fname,lname,balance);
cout<<endl<<"Congradulation Account is Created"<<endl;
cout<<acc;
break;
case 2:
cout<<"Enter Account Number:";

cin>>account_Number;

acc=b.Balance_Enquiry(account_Number);
cout<<endl<<"Your Account Details"<<endl;
cout<<acc;
break;
case 3:
cout<<"Enter Account Number:";

cin>>account_Number;
cout<<"Enter Balance:";
cin>>amount;

acc=b.Deposit(account_Number, amount);
cout<<endl<<"Amount is Deposited"<<endl;
cout<<acc;
break;
case 4:
cout<<"Enter Account Number:";

cin>>account_Number;
cout<<"Enter Balance:";
cin>>amount;

acc=b.Withdraw(account_Number, amount);
cout<<endl<<"Amount Withdrawn"<<endl;
cout<<acc;
break;
case 5:
cout<<"Enter Account Number:";

cin>>account_Number;

b.CloseAccount(account_Number);
cout<<endl<<"Account is Closed"<<endl;
cout<<acc;
case 6:
b.ShowAllAccounts();
break;
case 7: break;
default:

cout<<"\nEnter corret choice";

exit(0);

}
}while(choice!=7);
return 0;
}
Account::Account(string fname,string lname,float balance)
{
Next_Account_Number++;
account_Number=Next_Account_Number;
firstName=fname;
lastName=lname;
this->balance=balance;
}
void Account::Deposit(float amount)
{
balance+=amount;
}
void Account::Withdraw(float amount)
{
if(balance-amount<MIN_BALANCE)
throw InsufficientFunds();
balance-=amount;
}
void Account::setLastaccount_Number(long account_Number)
{
Next_Account_Number=account_Number;
}
long Account::getLastaccount_Number()
{
return Next_Account_Number;
}
ofstream & operator<<(ofstream &ofs,Account &acc)
{
ofs<<acc.account_Number<<endl;
ofs<<acc.firstName<<endl;
ofs<<acc.lastName<<endl;
ofs<<acc.balance<<endl;
return ofs;
}
ifstream & operator>>(ifstream &ifs,Account &acc)
{
ifs>>acc.account_Number;
ifs>>acc.firstName;
ifs>>acc.lastName;
ifs>>acc.balance;
return ifs;
}
ostream & operator<<(ostream &os,Account &acc)
{
os<<"First Name:"<<acc.getFirstName()<<endl;
os<<"Last Name:"<<acc.getLastName()<<endl;
os<<"Account Number:"<<acc.getAccNo()<<endl;
os<<"Balance:"<<acc.getBalance()<<endl;
return os;
}
Bank::Bank()
{
Account account;
ifstream infile;

infile.open("Bank.data");
if(!infile)
{
//cout<<"Error in Opening! File Not Found!!"<<endl;
return;
}
while(!infile.eof())
{
infile>>account;
accounts.insert(pair<long,Account>(account.getAccNo(),account));
}
Account::setLastaccount_Number(account.getAccNo());
infile.close();
}
Account Bank::OpenAccount(string fname,string lname,float balance)
{
ofstream outfile;
Account account(fname,lname,balance);
accounts.insert(pair<long,Account>(account.getAccNo(),account));
outfile.open("Bank.data", ios::trunc);
map<long,Account>::iterator itr;
for(itr=accounts.begin();itr!=accounts.end();itr++)
{
outfile<<itr->second;
}
outfile.close();
return account;
}
Account Bank::Balance_Enquiry(long account_Number)
{
map<long,Account>::iterator itr=accounts.find(account_Number);
return itr->second;
}
Account Bank::Deposit(long account_Number,float amount)
{
map<long,Account>::iterator itr=accounts.find(account_Number);
itr->second.Deposit(amount);
return itr->second;
}
Account Bank::Withdraw(long account_Number,float amount)
{
map<long,Account>::iterator itr=accounts.find(account_Number);
itr->second.Withdraw(amount);
return itr->second;
}
void Bank::CloseAccount(long account_Number)
{
map<long,Account>::iterator itr=accounts.find(account_Number);
cout<<"Account Deleted"<<itr->second;
accounts.erase(account_Number);
}
void Bank::ShowAllAccounts()
{
map<long,Account>::iterator itr;
for(itr=accounts.begin();itr!=accounts.end();itr++)
{
cout<<"Account "<<itr->first<<endl<<itr->second<<endl;
}
}
Bank::~Bank()
{

ofstream outfile;
outfile.open("Bank.data", ios::trunc);
map<long,Account>::iterator itr;
for(itr=accounts.begin();itr!=accounts.end();itr++)
{
outfile<<itr->second;
}
outfile.close();
}