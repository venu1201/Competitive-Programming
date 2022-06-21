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
        map<long long int,long long int> mp;
        vector<long long int> arr(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        long long int j=0,res;
        for(auto it:mp)
        {
           res =n-it.second;
           for(long long int i=0;i<it.second;i++)
           {
               cout<<res<<" ";
           }
           if(res==0)
           break;
            n=n-it.second;
        }cout<<endl;
    }
    return 0;
}