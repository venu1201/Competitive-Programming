#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b)
{
    return a.first>b.first;
}
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
            arr[i].second=i+1;
        }
        vector<int> ans;
        sort(arr.begin(),arr.end(),comp);
       
        
        for(int i=0;i<n;i++)
        {
            if(arr[i].first==arr[i].second)
            {
                ans.push_back(0);       
            }
            else
            {
                ans.push_back(arr[i].second);
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j].second-arr[i].second>=1)
                    {
                        arr[j].second=arr[j].second-arr[i].second;
                    }
                    else
                    {
                        arr[j].second=arr[i].first-arr[i].second+arr[j].second;
                    }
                }
            }
           
        }
        reverse(ans.begin(),ans.end());
        for(auto it:ans)
        {
            cout<<it<<" ";
        }cout<<endl;
        

    }
return 0;
}