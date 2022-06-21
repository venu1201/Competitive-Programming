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
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> arr;
        int h=0;
        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            for(int j=0;j<str.size();j++)
            {
                if(str[j]=='R')
                {
                    arr.push_back(make_pair(i,j));
                    if(i==0 && j==0)
                    {
                        h=1;
                    }
                }
            }
        }
        
        int hh=0;
        
        if(h==1)
        { 
            yes
            continue;
        }
        else
        {
            for(int i=0;i<arr.size();i++)
            {
                int x=0-arr[i].first;
                int y=0-arr[i].second;
                hh=0;
                for(int j=0;j<arr.size();j++)
                {
                    int a=arr[j].first+x;
                    int b=arr[j].second+y;
                    if(a<0 || b<0 || a>=n || b>=m)
                    {
                        hh=1;
                        break;
                    }
                }
                if(hh==0)
                {
                    yes
                    break;
                }
            }
             if(hh!=0)
                no
        }
       
    }
return 0;
}