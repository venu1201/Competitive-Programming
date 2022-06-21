#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int check1=0,check2=0;
        for(int i=0;i<3;i++)
        {
           int a;
           cin>>a;
           if(a==1)
           {
               check1=1;
           } 
           if(a==0)
           {
               check2=1;
           }
        }
        if(check1==1 && check2==1)
        cout<<1<<endl;
        else
        cout<<0<<endl;
    }
    return 0;
}