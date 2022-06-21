#include<bits/stdc++.h>
using namespace std;
class Account
{
private:
    long account_Number;
    string firstName;
    string lastName;
    float balance;
    static long Next_Account_Number;

public:
    Account() {}
    Account(
        string fname, string lname, float balance
    );
    long getAccNo() { 
        return account_Number; 
    }
    string getFirstName() { 
        return firstName; 
    }
    string getLastName() {
         return lastName; 
    }
    float getBalance() { 
        return balance; 
    }
    void Deposit(
        float amount
        );
    void Withdraw(float amount);
    static void setLastaccount_Number(long account_Number);
    static long getLastaccount_Number();
    friend ofstream &operator<<(ofstream &ofs, Account &acc);
    friend ifstream &operator>>(ifstream &ifs, Account &acc);
    friend ostream &operator<<(ostream &os, Account &acc);
};
class InsufficientFunds
{
};
long Account::Next_Account_Number = 0;
class Bank
{
private:
    map<long, Account> accounts;

public:
    Bank();
    Account OpenAccount(string fname, string lname, float balance);
    Account Balance_Enquiry(long account_Number);
    Account Deposit(long account_Number, float amount);
    Account Withdraw(long account_Number, float amount);
    void CloseAccount(long account_Number);
    void ShowAllAccounts();
    ~Bank();
};
Account::Account(string fname, string lname, float balance)
{
    Next_Account_Number++;
    account_Number = Next_Account_Number;
    firstName = fname;
    lastName = lname;
    this->balance = balance;
}
void Account::Deposit(float amount)
{
    balance += amount;
}
void Account::Withdraw(float amount)
{
    if (balance - amount < 500)
        throw InsufficientFunds();
    balance -= amount;
}
void Account::setLastaccount_Number(long account_Number)
{
    Next_Account_Number = account_Number;
}
long Account::getLastaccount_Number()
{
    return Next_Account_Number;
}
ofstream &operator<<(ofstream &ofs, Account &acc)
{
    ofs << acc.account_Number << endl;
    ofs << acc.firstName << endl;
    ofs << acc.lastName << endl;
    ofs << acc.balance << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, Account &acc)
{
    ifs >> acc.account_Number;
    ifs >> acc.firstName;
    ifs >> acc.lastName;
    ifs >> acc.balance;
    return ifs;
}
ostream &operator<<(ostream &os, Account &acc)
{
    os << "First Name:" << acc.getFirstName() << endl;
    os << "Last Name:" << acc.getLastName() << endl;
    os << "Account Number:" << acc.getAccNo() << endl;
    os << "Balance:" << acc.getBalance() << endl;
    return os;
}
Bank::Bank()
{
    Account account;
    ifstream infile;

    infile.open("Bank.data");
    if (!infile)
    {
        // cout<<"Error in Opening! File Not Found!!"<<endl;
        return;
    }
    while (!infile.eof())
    {
        infile >> account;
        accounts.insert(pair<long, Account>(account.getAccNo(), account));
    }
    Account::setLastaccount_Number(account.getAccNo());
    infile.close();
}
Account Bank::OpenAccount(string fname, string lname, float balance)
{
    ofstream outfile;
    Account account(fname, lname, balance);
    accounts.insert(pair<long, Account>(account.getAccNo(), account));
    outfile.open("Bank.data", ios::trunc);
    map<long, Account>::iterator itr;
    for (itr = accounts.begin(); itr != accounts.end(); itr++)
    {
        outfile << itr->second;
    }
    outfile.close();
    return account;
}
Account Bank::Balance_Enquiry(long account_Number)
{
    map<long, Account>::iterator itr = accounts.find(account_Number);
    return itr->second;
}
Account Bank::Deposit(long account_Number, float amount)
{
    map<long, Account>::iterator itr = accounts.find(account_Number);
    itr->second.Deposit(amount);
    return itr->second;
}
Account Bank::Withdraw(long account_Number, float amount)
{
    map<long, Account>::iterator itr = accounts.find(account_Number);
    itr->second.Withdraw(amount);
    return itr->second;
}
void Bank::CloseAccount(long account_Number)
{
    map<long, Account>::iterator itr = accounts.find(account_Number);
    cout << "Account Deleted" << itr->second;
    accounts.erase(account_Number);
}
void Bank::ShowAllAccounts()
{
    map<long, Account>::iterator itr;
    for (itr = accounts.begin(); itr != accounts.end(); itr++)
    {
        cout << "Account " << itr->first << endl
             << itr->second << endl;
    }
}
Bank::~Bank()
{

    ofstream outfile;
    outfile.open("Bank.data", ios::trunc);
    map<long, Account>::iterator itr;
    for (itr = accounts.begin(); itr != accounts.end(); itr++)
    {
        outfile << itr->second;
    }
    outfile.close();
}
int main()
{
    Bank bk;
    Account acc;
    
    string fname, lname;

    long account_Number;
    float balance;
    float amount;
    cout << " The Banking System" << endl;
    int key;
    do
    {
        cout << "Select one option below "<<endl;
        cout << "1 Open an Account"<<endl;
        cout << "2 Balance the Enquiry"<<endl;
        cout << "3 Deposit Money"<<endl;
        cout << "4 Withdrawal Money"<<endl;
        cout << "5 Close an Account"<<endl;
        cout << "6 Show All Accounts"<<endl;
        cout << "7 Quit"<<endl;
        cout << "Enter your choice: "<<endl;
        cin>>key;
        switch (key)
        {
        case 1:
            cout << "Enter First Name: "<<endl;

            cin >> fname;
            cout << "Enter Last Name: "<<endl;
            cin >> lname;
            cout << "Enter initil Balance: "<<endl;
            cin >> balance;

            acc = bk.OpenAccount(fname, lname, balance);
            cout << endl
                 << "Congradulation Account is Created" << endl;
            cout << acc;
            break;
        case 2:
            cout << "Enter Account Number:"<<endl;

            cin >> account_Number;

            acc = bk.Balance_Enquiry(account_Number);
            cout << endl
                 << "Your Account Details" << endl;
            cout << acc;
            break;
        case 3:
            cout << "Enter Account Number:"<<endl;

            cin >> account_Number;
            cout << "Enter Balance:"<<endl;
            cin >> amount;

            acc = bk.Deposit(account_Number, amount);
            cout << endl
                 << "Amount is Deposited" << endl;
            cout << acc;
            break;
        case 4:
            cout << "Enter Account Number:"<<endl;

            cin >> account_Number;
            cout << "Enter Balance:"<<endl;
            cin >> amount;

            acc = bk.Withdraw(account_Number, amount);
            cout << endl
                 << "Amount Withdrawn" << endl;
            cout << acc;
            break;
        case 5:
            cout << "Enter Account Number:"<<endl;

            cin >> account_Number;

            bk.CloseAccount(account_Number);
            cout << endl
                 << "Account is Closed" << endl;
            cout << acc;
        case 6:
            bk.ShowAllAccounts();
            break;
        case 7:
            break;
        default:

            cout << "\nEnter corret choice";

            exit(0);
        }
    } while (key != 7);
    return 0;
}
