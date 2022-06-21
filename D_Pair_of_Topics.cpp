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
    T=1;
    while(T--)
    {
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            a[i]=a[i]-b[i];
        }
        sort(a.begin(),a.end());
        int ans=0;
       
        for(int i=0;i<n;i++)
        {
            auto it=lower_bound(a.begin()+i+1,a.end(),1-a[i]);
            int x=n;
            if(it!=a.end())
                x=it-a.begin();
            
            ans+=n-x;
        }
        cout<<ans<<endl;
    }
return 0;
}