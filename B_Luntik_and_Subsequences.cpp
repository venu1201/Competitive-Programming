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
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)
            {
                cnt1++;
            }
            if(arr[i]==0)
            {
                cnt2++;
            }
        }
        int sum=0;
        if(cnt2==1 || cnt2==0)
        {
            sum+=cnt1+cnt2*cnt1;
            cout<<sum<<endl;
            continue;
        }
        sum+=cnt1 + ((cnt2*cnt2)-1)*cnt1;
        cout<<sum<<endl; 
    }
return 0;
}