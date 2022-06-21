#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define debug1dv(arr){ for(auto it:arr) cout<<it<<" "; cout<<endl;}
#define debug2dv(arr){for(auto it:arr){for(auto x:it)cout<<x<<" "; cout<<endl;}}
#define debugmap(mp){for(auto it:mp) cout<<it.first<<"->"<<it.second<<endl;}
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
        string str;
        cin>>str;
        if(str.size()%2==1)
            cout<<-1<<endl;
        else
        {
            map<char,int> mp;
            for(int i=0;i<str.size()/2;i++)
            {
                mp[str[i]]++;
            }
            int cnt=0;
            for(int i=str.size()/2;i<str.size();i++)
            {
                if(mp[str[i]]>0)
                {
                    mp[str[i]]--;
                }
                else
                cnt++;
            }
            cout<<cnt<<endl;

        }
    }
return 0;
}