#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define debug1dv(arr){ for(auto it:arr) cout<<it<<" "; cout<<endl;}
#define debug2dv(arr){for(auto it:arr){for(auto x:it)cout<<x<<" "; cout<<endl;}}
#define debugmap(mp){for(auto it:mp) cout<<it.first<<"->"<<it.second<<endl;}
using namespace std;
int fun(auto l,auto r,deque<int>& arr,int n,int m,int pre)
{
    
    unordered_set<int> st;
    for(auto it:arr)
    {
        st.insert(it);
    }
    if(st.size()==n)
    {
        return 0;
    }
    auto val=arr.end()-1;
    int v=*val;
    arr.pop_back();
    arr.push_front(m);
    m++;
    int ans=fun(arr.begin(),arr.end()-1,arr,n,m,m-1)+1;
    arr.pop_front();
    arr.push_back(v);
    arr.pop_front();
    arr.push_back(m);
    m++;
    int an=fun(arr.begin(),arr.end()-1,arr,n,m,-1)+1;
    ans=min(ans,an);
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
        int n;
        cin>>n;
        deque<int> arr;
        int m=-1;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m=max(m,x);
            arr.push_back(x);
        }
        m++;
        cout<<fun(arr.begin(),arr.end()-1,arr,n,m,-1)<<endl;
        

    }
return 0;
}