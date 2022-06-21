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
        int y=0,ch=1;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>=0)
            {
                ch=0;
                y+=arr[i];
            }
        }
        if(ch==1)
        {
            y=*max_element(arr.begin(),arr.end());
        }
        int x=arr[0],xx=arr[0];
        for(int i=1;i<n;i++)
        {
            x+=arr[i];
            if(x<arr[i])
            {
                x=arr[i];
            }
            if(xx<x)
            {
                xx=x;
            }
        }
        cout<<xx<<" "<<y<<endl;
    }
return 0;
}