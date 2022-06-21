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
        int ans[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int x=0,y=n-1,j=n-1;
        while(x<y)
        {
            ans[j]=arr[x];
            j--;
            ans[j]=arr[y];
            j--;
            x++;
            y--;
        }
        if(n%2==1)
        {
            ans[0]=arr[n/2];
        }
        for(auto it:ans)
        {
            cout<<it<<" ";
        }cout<<endl;
    }
return 0;
}