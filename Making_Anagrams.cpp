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
    string str1,str2;
    cin>>str1>>str2;
    map<char,int> mp1,mp2;
    for(auto it:str1)
    mp1[it]++;
    for(auto it:str2)
    mp2[it]++;
    int cnt=0;
    for(int i=0;i<str1.size();i++)
    {
        if(mp2[str1[i]]>0)
        {
            mp2[str1[i]]--;
        }
        else
        cnt++;
    }
    for(auto it:mp2)
    {
        cnt+=it.second;
    }
    cout<<cnt<<endl;
return 0;
}