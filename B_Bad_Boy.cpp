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
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        vector<pair<int,int>> arr={make_pair(1,1),make_pair(1,m),make_pair(n,m),make_pair(1,m)};
        int ax,ay,bx,by;
        int d=-1;
        for(int i=0;i<arr.size();i++)
        {
           
            for(int j=0;j<arr.size();j++)
            {
                if(abs(arr[i].first-arr[j].first)+ abs(arr[i].second-arr[j].second)>d)
                {
                    ax=arr[i].first;
                    ay=arr[i].second;
                    bx=arr[j].first;
                    by=arr[j].second;
                    d=abs(arr[i].first-arr[j].first)+ abs(arr[i].second-arr[j].second);
                }
            }
        }
        cout<<ax<<" "<<ay<<" ";
        cout<<bx<<" "<<by<<endl;

    }
return 0;
}