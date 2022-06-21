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

        if (str[0] == '0' | str[1] == '0' | str[n]=='0') {
            cout<<"NO"<<endl;
            continue;
        }
        int a[n+1];
        for(int i=0;i<n;i++)
        {
            a[i]=i+2;
        }
        for(int i=2;i<n;i++)
        {
            if(str[i]=='0')
            {
                swap(a[i],a[i-1]);
            }
        }
        cout<<"Yes"<<endl;
        for(auto it:a)
        {
            cout<<it<<" ";
        }cout<<endl;
    }
return 0;
}