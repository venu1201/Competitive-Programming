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
        vector<int> odd,even;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==1)
            {
                odd.push_back(x);
            }
            else
            even.push_back(x);
        }
        for(auto it:odd)
        {
            cout<<it<<" ";
        }
        for(auto it:even)
        {
            cout<<it<<" ";
        }cout<<endl;
    }
return 0;
}