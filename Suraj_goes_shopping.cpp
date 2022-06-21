#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin>>n;
        vector<long long int> arr(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        long long int sum=0;
        int c=0,d=2;
        for(long long int i=n-1;i>=0;i--)
        {
            if(c!=2)
            {
                sum+=arr[i];
                c++;
            }
            else 
            {
                i-=2;
                c=0;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}