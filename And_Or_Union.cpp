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
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        int c=1;
        for(int i=0;i<32;i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j]%2==1)
                {
                    cnt++;
                }
                arr[j]=arr[j]/2;
            }
            if(cnt>1)
            {
                ans+=c;
            }
            c=c*2;
        }
        cout<<ans<<endl;
    }
return 0;
}