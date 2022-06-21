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
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end(),greater<int>());
        int i=0;
        int l=1;
        int cnt=0;
        while(i<n)
        {
            if(arr[i]*l>=k)
            {
                cnt++;
                l=1;
            }
            else
            {
                l++;
            }
            i++;
        }
        cout<<cnt<<endl;
    }
return 0;
}