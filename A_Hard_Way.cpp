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
        vector<pair<int,int>> arr(3);
        for(int i=0;i<3;i++)
        {
            cin>>arr[i].first>>arr[i].second;
        }
        if((arr[0].second==arr[1].second && arr[2].second<arr[0].second) ||
            (arr[1].second==arr[2].second && arr[0].second<arr[1].second) ||
            (arr[2].second==arr[0].second && arr[1].second<arr[0].second) )
            {
                if(arr[0].second==arr[1].second)
                {
                    cout<<abs(arr[0].first-arr[1].first)<<endl;
                }
                else if(arr[1].second==arr[2].second)
                {
                    cout<<abs(arr[1].first-arr[2].first)<<endl;
                }
                else
                {
                    cout<<abs(arr[0].first-arr[2].first)<<endl;
                }
            }
            else
            {
                cout<<0<<endl;
            }
            
            
    }
return 0;
}