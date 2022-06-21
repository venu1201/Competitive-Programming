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
        set<int> st;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
        int ans=st.size();
        for(int i=0;i<st.size();i++)
        {
            cout<<ans<<" ";
        }
        ans++;
        for(int i=0;i<n-st.size();i++)
        {
            cout<<ans<<" ";
            ans++;
        }cout<<endl;
    }
return 0;
}