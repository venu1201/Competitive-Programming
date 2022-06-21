#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,k;
        cin>>n>>k;
        vector<long long int> arr(n);
        vector<long long int> a(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long int remove=0,add=0,sum=0;
        for(long long int i=0;i<n;i++)
        {
            sum+=arr[i]%k;
            
        }
       cout<<sum%k<<endl;

    }
    return 0;
}