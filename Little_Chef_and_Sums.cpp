#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
    long long int n;
    cin>>n;
    long long int a[n];
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    long long int y=999999999999,ans,x=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        sum2+=a[i];
        if(y>sum-x+sum2)
        {
            
            y=sum-x+sum2;
            
            ans=i;
        }
        x=sum2;
    }
    cout<<ans+1<<endl;
    }
    return 0;
}