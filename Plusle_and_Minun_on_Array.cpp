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
        int a=0,b=0,a1=99999999999,b1=-9999999999999;
        int ans=0;
       
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            arr[i]=abs(arr[i]);
            if(i%2==0)
            {
                if(a1>arr[i])
                {
                    a1=arr[i];
                    a=i;
                }
            }
            else
            {
                if(b1<arr[i])
                {
                    b1=arr[i];
                    b=i;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                ans+=abs(arr[i]);
            }
            else
            {
                ans-=abs(arr[i]);
            }
        }
        swap(arr[a],arr[b]);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                sum+=abs(arr[i]);
            }
            else
            {
                sum-=abs(arr[i]);
            }
        }
        cout<<max(sum,ans)<<endl;
    }
return 0;
}