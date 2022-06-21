#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> t;
int count=0,sum=0,k=9;
void res(int x,vector<int> ans,vector<int>arr)
{
    if(x==arr.size())
    {
        if(::sum<=::k)
        {
            t.push_back(ans);
            ::count++;
        }
        
        return;
    }
    
    res(x+1,ans,arr);
    ::sum+=arr[x];
    ans.push_back(arr[x]);
    res(x+1,ans,arr);
    ::sum-=arr[x];
    ans.pop_back();
}

int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    vector<int>arr={1,2,3,4,5};
    vector<int> ans={};
    vector<bool> check;
    for(int i=0;i<6;i++)
    {
        check.push_back(true);
    }

    res(0,ans,arr);
    cout<<::count<<endl;
    for(auto it:t)
    {
        for(auto x:it)
        {
            cout<<x<<" ";
        }cout<<endl;
    }
    
    
   
return 0;
}