#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long double a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+b+c<=d)
        {
            cout<<"1"<<endl;
        }
        else if(a+b<=d || b+c<=d || c+a<=d)
        {
            cout<<"2"<<endl;
        }
        else 
        {
            cout<<"3"<<endl;
        }
       
    }
}