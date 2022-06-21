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
        sort(arr.begin(),arr.end());
        int i=2,j=n-2;
        int sum1=arr[0]+arr[1];
        int sum2=arr[n-1];
        if(sum1<sum2)
        {
            yes
            continue;
        }
        int flag=0;
        while(i<j)
        {
            sum1+=arr[i];
            sum2+=arr[j];
            if(sum1<sum2)
            {
                flag=1;
                yes
                break;
            }
            i++;
            j--;
        }
        if(flag==0)
        no
    }
return 0;
}