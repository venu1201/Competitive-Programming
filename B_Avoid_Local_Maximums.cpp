#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
using namespace std;
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first;
            arr[i].second=0;
        }
        for(int i=1;i<n-1;i++)
        {
            if(arr[i].first>arr[i-1].first && arr[i].first>arr[i+1].first)
            {
                arr[i].second=1;
            }
            else if(arr[i].first<arr[i-1].first && arr[i].first<arr[i+1].first)
            {
                arr[i].second=-1;
            }
        }
        int cnt=0;
        
        for(int i=1;i<n-1;i++)
        {
            if(arr[i-1].second==arr[i+1].second && arr[i-1].second==1)
            {
                arr[i].first=max(arr[i-1].first,arr[i+1].first);
                arr[i].second=0;
                arr[i-1].second=0;
                arr[i+1].second=0;
                cnt++;
            }
        }
        for(int i=1;i<n-1;i++)
        {
            if(arr[i].second==1)
            {
                arr[i].first=max(arr[i-1].first,arr[i+1].first);
                cnt++;
            }
        }
        cout<<cnt<<endl;
        for(auto it:arr)
        {
            cout<<it.first<<" ";
        }cout<<endl;
        
    }
return 0;
}