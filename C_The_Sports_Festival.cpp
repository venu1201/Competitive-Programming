#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second > b.second)
    {
        return true;
    }
    if (a.second < b.second)
    {
        return false;
    }
    if (a.second == b.second)
    {
        if (a.first < b.first)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int32_t main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    if (mp.size() == n)
    {
        sort(arr.begin(), arr.end());
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum += arr[i] - arr[0];
        }
        cout << sum << endl;
    }
    else
    {
        vector<pair<int, int>> a;
        for(auto it:mp)
        {
            a.push_back(make_pair(it.first,it.second));
        }
        sort(a.begin(), a.end(), comp);
        vector<int> ans;
        for(auto it:a)
        {
            for(int i=0;i<it.second;i++)
            {
                ans.push_back(it.first);
            }
        }
        
        int sum = 0,m=ans[0],mi=ans[0];
        for (int i = 1; i < n; i++)
        {
            m=max(m,ans[i]);
            mi=min(mi,ans[i]);
            sum+=m-mi;
        }
        cout<<sum<<endl;
    }

    return 0;
}