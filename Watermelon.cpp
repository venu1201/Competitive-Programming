#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,res=0;
        cin>>n;
        long long int sum=0;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            sum+=x;
            
        }
        if(sum<0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}