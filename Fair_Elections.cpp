#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int sum1=0,sum2=0;
        vector<long long int> arr(n);
        vector<long long int> ar(m);
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum1+=arr[i];
        }
        for(long long int i=0;i<m;i++)
        {
            cin>>ar[i];
            sum2+=ar[i];
        }
        long long int min=*min_element(arr.begin(),arr.end());
        long long int max=*max_element(ar.begin(),ar.end());
        long long int l=n;
        if(n>m)
        l=m;
        long long int ans=0,j=0;
        while(sum1<sum2 && j<l)
        {
            long long int min=*min_element(arr.begin(),arr.end());
            long long int max=*max_element(ar.begin(),ar.end());
            if(min>=max)
            auto it=find(arr.begin(),arr.end(),min);
            auto it1=find(ar.begin(),ar.end(),max);
            swap(arr[it-arr.begin()],ar[it1-ar.begin()]);

            sum1+=max;
            sum1-=min;
            sum2+=min;
            sum2-=max;
            ans++;
            j++;
            
        }
        if(sum1>sum2)
        cout<<ans<<endl;
        else
        cout<<"-1"<<endl;
        
    }
}