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
        string str;
        cin>>str;
        int sum=0;
        sort(str.begin(),str.end());
        for(int i=0;i<str.length();i++)
        {
            sum+=(i+1)*(str[i]-96);
            
        }
        cout<<sum<<endl;
    }
return 0;
}