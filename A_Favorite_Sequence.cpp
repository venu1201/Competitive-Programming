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
        vector<int> ans;
        int x=0,y=n-1;
        while(x<y)
        {
           
            ans.push_back(arr[x]);
           
            ans.push_back(arr[y]);
            x++;
            y--;
          
        }
        if(n%2==1)
        {
            ans.push_back(arr[n/2]);
        }
        for(auto it:ans)
        {
            cout<<it<<" ";
        }cout<<endl;
    }
return 0;
}