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
        int n,m;
        cin>>n>>m;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {       
            for(int j=0;j<m;j++)
            {
                int x=max(abs(0-i),abs((n-1)-i));
                int y=max(abs(0-j),abs(j-(m-1)));
                
               
                arr.push_back(x+y);
            }
        }
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
return 0;
}