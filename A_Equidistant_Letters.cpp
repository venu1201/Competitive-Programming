#include<bits/stdc++.h>
#define int long long int
using namespace std;
bool comp(pair<char,int> a,pair<char,int> b)
{
    return a.second>b.second;
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
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        cout<<str<<endl;

    }
return 0;
}