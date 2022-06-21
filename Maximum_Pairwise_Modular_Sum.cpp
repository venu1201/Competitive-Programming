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
        int n,m;
        cin>>n>>m;
        vector<int> arr(n);
        set<int> st;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);

        }
        vector<int> a;
        for(auto it:st)
        {
            a.push_back(it);
        }
        sort(a.begin(),a.end());
        n=a.size();
        int x=a[n-1],y=a[n-2];
        int ch=max(2*x,x+y+((x-y)%m));
        
        cout<<max(ch,x+y+m-(x-y))<<endl;
    }
return 0;
}