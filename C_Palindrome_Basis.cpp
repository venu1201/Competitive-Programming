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
    int N=40001;
    vector<int> dp(N);
    dp[0]=1;
    dp[1]=2;
    for(int i=2;i<=N;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<dp[n-1]<<endl;
    }
   
    
    
return 0;
}