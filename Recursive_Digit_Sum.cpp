#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define debug1dv(arr){ for(auto it:arr) cout<<it<<" "; cout<<endl;}
#define debug2dv(arr){for(auto it:arr){for(auto x:it)cout<<x<<" "; cout<<endl;}}
#define debugmap(mp){for(auto it:mp) cout<<it.first<<"->"<<it.second<<endl;}
using namespace std;
void fun(string &str,int k)
{
    if(str.size()==1)
        return;
    int sum=0;
    for(int i=0;i<str.size();i++)
    {
        sum+=(str[i]-'0');
    }
   
    str=to_string(sum);
    fun(str,k);
}
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    string str;
    cin>>str;
    int k;
    cin>>k;
    int sum=0;
    for(int i=0;i<str.size();i++)
    {
        sum+=(str[i]-'0');
    }
    sum=sum*k;
    str=to_string(sum);
    fun(str,k);
    cout<<str<<endl;
    
return 0;
}