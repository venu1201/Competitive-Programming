#include<bits/stdc++.h>
using namespace std;
int dp[1000000];
int fun(vector<int> &a,int n)
{
    cout<<n<<" n"<<endl;
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n]=1;
    for(int i=0;i<n;i++)
    {
        if(a[n]>a[i])
        {
            cout<<n<<" "<<i<<endl;
            dp[n]=max(1+fun(a,i),dp[n]);
        }
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<1000000;i++)
    {
        dp[i]=-1;
    }
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<fun(arr,n-1)<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<dp[i]<<" ";
    }
    return 0;
}