#include<bits/stdc++.h>
#define int long long int
using namespace std;
bool check(vector<int> arr)
{
    for(int i=1;i<arr.size();i++)
    {
        if(__gcd(arr[i],arr[i-1])!=1)
        {
            return false;
        }
    }
    return true;
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
        vector<int> arr(n);
        vector<vector<int>> ans;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(check(arr)==1)
        {
            cout<<0<<endl;
            continue;
        }
        int cnt=0;
        auto it=min_element(arr.begin(),arr.end());
        if(it-arr.begin()!=0)
        {
            cnt++;
            ans.push_back({1,it-arr.begin()+1,arr[it-arr.begin()],arr[0]});
            swap(arr[0],arr[it-arr.begin()]);
        }
        for(int i=1;i<n;i++)
        {
            cnt++;
            ans.push_back({1,i+1,arr[0],arr[0]+i});
        }
        cout<<cnt<<endl;
        for(int i=0;i<ans.size();i++)
        {
            for(auto it:ans[i])
            {
                cout<<it<<" ";
            }cout<<endl;
        }
        
    }
return 0;
}