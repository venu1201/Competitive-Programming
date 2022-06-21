#include<bits/stdc++.h>
using namespace std;
class money{
    private:
        int dollar;
        int cents;
    public:
        void getdata()        
        {
            cout<<"Enter the dollars and cents you have :"<<endl;
            cin>>dollar>>cents;
        }
        void displaydata()
        {
            cout<<"You have "<<dollar<<" and "<<cents<<endl;
        }
        
        friend int maximummoney(money a,money b);
        friend money clone(money a);
};
int maximummoney(money a ,money b)
{
    int first=a.dollar*100+a.cents;
    int second=b.dollar*100+b.cents;
    return max(first,second);
}
money clone(money a)
{
    money cl=a;
    return cl;
}
int main()
{
    money first_obj,second_obj;
    first_obj.getdata();
    first_obj.displaydata();
    second_obj.getdata();
    second_obj.displaydata();
    cout<<"maximum of first obj and second obj be "<<maximummoney(first_obj,second_obj)<<" cents"<<endl;
    money c=clone(first_obj);
    cout<<"the close of first obj is in c :"<<endl;
    c.displaydata();

    
return 0;
}