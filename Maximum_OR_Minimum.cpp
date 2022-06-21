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
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            int h;
            cin>>h;
            if(h==0)
            {
                y++;
            }
            else
            {
                x++;
            }
        }
        if(x>=y)
        {
            cout<<1<<endl;
        }
        else
        cout<<0<<endl;
    }
return 0;
}