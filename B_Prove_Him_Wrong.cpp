#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
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
        int x=1;
        int ch=n;
        vector<int> arr;
        while(x<=1e9 && n)
        {
            arr.push_back(x);
            x*=3;
            n--;
        }
        if(arr.size()==ch)
        {
            yes
            for(auto it:arr)
            {
                cout<<it<<" ";
            }cout<<endl;
        }
        else
        no
    }
return 0;
}