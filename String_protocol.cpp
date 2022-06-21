#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
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
        set<char> s;
        int n;
        cin>>n;
        string str;
        cin>>str;
        int cnt=0;
        int i=0;
        while(i<n)
        {
            if(str[i]==str[i+1])
            {
                i+=2;
                cnt++;
            }
            else
            {
                i++;
                cnt++;
            }
        }
        if(i==n-1)
        {
            
        }
        cout<<cnt<<endl;

    }
return 0;
}