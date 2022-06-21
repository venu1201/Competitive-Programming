#include<bits/stdc++.h>
#define int long long int
using namespace std;
void fun(vector<string> arr,string check,vector<string> ans,vector<string>&res)
{
    string x="";
    for(auto it:ans)
    {
        x+=it;
        cout<<it<<" ";
    }cout<<endl;
    if(check==x)
    {
        res=ans;
        return;
    }
    if(check.size()<=x.size())
    {
        return;
    }
    for(int i=0;i<arr.size();i++)
    {
        ans.push_back(arr[i]);
        fun(arr,check,ans,res);
        ans.pop_back();
        
    }
    return;
}
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
        vector<string> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        string check;
        cin>>check;
        vector<string> ans;
        vector<string> res;
        fun(arr,check,ans,res);
        for(auto it:res)
        {
            cout<<it<<" ";
        }cout<<endl;
    }
return 0;
}