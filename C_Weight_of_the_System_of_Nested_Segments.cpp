#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
using namespace std;
vector<pair<int,int>> fun(vector<int>& arr, int N,
                              int K)
{
 
    
    vector<pair<int, int> > use;
 
    for (int i = 0; i < N; i++) {
        use.push_back({ arr[i], i });
    }
 
    sort(use.begin(), use.end());
 
   
    vector<pair<int,int>> ans;
 
   
    for (int i = 0; i < K; i++) {
 
        
        ans.push_back(make_pair(use[i].second,-1));
    }
 
    
    sort(ans.begin(), ans.end());
    
    for (int i = 0; i < (ans.size()); i++)
    {
        ans[i].second=ans[i].first;
        ans[i].first = arr[ans[i].first];
        
    }
 
    
    return ans;
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
        int n,m;
        cin>>n>>m;
        vector<int> a,b;
        vector<pair<int,int>> arr;
        map<int,int> mp;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            arr.push_back(make_pair(x,y));
            mp[x]=i;
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            a.push_back(arr[i].second);
        }
        vector<pair<int,int>> ans=fun(a,m,2*n);
        int sum=0;
        for(auto it:ans)
        {
            sum+=it.first;
        }
        cout<<sum<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<mp[arr[ans[i].second].first]+1<<" "<<mp[arr[ans[ans.size()-i-1].second].first]+1<<endl;
        }
        
        
    }
return 0;
}