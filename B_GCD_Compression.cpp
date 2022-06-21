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
        vector<pair<int,int>> even,odd;
        for(int i=0;i<2*n;i++)
        {
            int x;
            cin>>x;
            if(x%2==1)
            {
                odd.push_back(make_pair(x,i+1));
            }
            else
            {
                even.push_back(make_pair(x,i+1));
            }
        }
        int x=even.size();
        if(x%2==1)
        {
            x--;
        }
        int cnt=0,ch=0;
        for(int i=0;i<x;i+=2)
        {
            cout<<even[i].second<<" "<<even[i+1].second<<endl;
            cnt++;
            if(cnt==n-1)
            {
                ch=1;
                break;
            }
        }
        if(ch==1)
        {
            continue;
        }
        x=odd.size();
        if(x%2==1)
        {
            x--;
        }
        for(int i=0;i<x;i+=2)
        {
            cout<<odd[i].second<<" "<<odd[i+1].second<<endl;
            cnt++;
            if(cnt==n-1)
            {
                ch=1;
                break;
            }
        }
         if(ch==1)
        {
            continue;
        }
    }
return 0;
}