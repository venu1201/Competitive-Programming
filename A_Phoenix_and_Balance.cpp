#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int T;
    cin>>T;
    vector<int> arr;
    int x=2;
    for(int i=0;i<30;i++)
    {
        arr.push_back(x);
        x*=2;
    }
    while(T--)
    {
        int n;
        cin>>n;
        if(n==2)
        {
            cout<<2<<endl;
            continue;
        }
        int y=(n/2)-1;
        int sum=arr[n-1],sum2=0;
        for(int i=0;i<y;i++)
        {
           
            sum+=arr[i];
        }cout<<endl;
        for(int i=y;i<n-1;i++)
        {
            sum2+=arr[i];
        }
        cout<<abs(sum2-sum)<<endl;
    }
return 0;
}