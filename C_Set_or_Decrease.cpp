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
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum<=k)
        {
            cout<<0<<endl;
            continue;
        }
        sort(arr.begin(),arr.end());
        int cnt=0 ,m=-1;
        while(sum>=k)
        {
            cout<<"huh "<<sum<<endl;
            int s=0;
            arr[0]--;
            sum--;
            s=sum;
            cnt++;
            int cnt2=0;
            for(int i=arr.size()-1;i>0;i--)
            {
                if(s<=k)
                {
                    break;
                }
                s-=(arr[i]-arr[0]);
                cnt2++;
            }
            m=min(cnt2,m);
        }
        cout<<cnt+m<<endl;
    }
return 0;
}