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
        string str;
        cin>>str;
        string ans="2020";
        if(str.substr(0,4)==ans || str.substr(n-4,n)==ans)
        {
            cout<<"YES"<<endl;
        }
        else if(str.substr(0,1)+str.substr(n-3,n)==ans || str.substr(0,3)+str.substr(n-1,n)==ans)
        {
            cout<<"YES"<<endl;
        }
        else if(str.substr(0,2)+str.substr(n-2,n)==ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
return 0;
}