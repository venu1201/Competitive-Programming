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
        sort(arr.begin(),arr.end());
        int x,y,d=999999999999999,index;
        for(int i=0;i<n-1;i++)
        {
            if(d>abs(arr[i]-arr[i+1]))
            {
                d=abs(arr[i]-arr[i+1]);
                x=arr[i];
                y=arr[i+1];
                index=i;
            }
        }
        vector<int> ans;
        ans.push_back(x);
        vector<int> t,h;
        for(int i=0;i<index;i++)
        {
            t.push_back(arr[i]);
        }
        for(int i=index+2;i<n;i++)
        {
            h.push_back(arr[i]);
        }
        
        sort(h.begin(),h.end());
        sort(t.begin(),t.end());
        for(auto it:h)
        {
            ans.push_back(it);
        }
        for(auto it:t)
        {
            ans.push_back(it);
        }
        ans.push_back(y);
        for(auto it:ans)
        {
            cout<<it<<" ";
        }cout<<endl;
    }
return 0;
}