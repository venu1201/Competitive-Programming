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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x=0,ans=0;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i+1]==0)
                {
                    x=1;
                    break;
                }
            while(arr[i]>=arr[i+1])
            {
                arr[i]/=2;
                ans++;
            }
        }
        if(x==1)
        cout<<-1<<endl;
        else
        cout<<ans<<endl;
        
    }
return 0;
}