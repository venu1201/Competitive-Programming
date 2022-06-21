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
        string str;
        cin>>str;
        int a=0,b=0,c=1;
       int i=0;
        while(i<str.size())
        {
            a=0;
            b=0;
            while(str[i]=='a')
            {
                a++;
                i++;
            }
            while(str[i]=='b')
            {
                b++;
                i++;
            }
            if(a==1 || b==1)
            {
                c=0;
                no
                break;
            }
            
        }
        if(c==1)
        {
            yes
        }

    }
return 0;
}