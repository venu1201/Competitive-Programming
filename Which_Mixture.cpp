#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int a,b;
        cin>>a>>b;
        if(a==0)
        {
            cout<<"Liquid"<<endl;
        }
        else if(b==0)
        {
            cout<<"Solid"<<endl;
        }
        else 
        {
            cout<<"Solution"<<endl;
        }
    }
    return 0;
}