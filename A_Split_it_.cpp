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
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        if(2*k+1<=n)
        {
            int cnt=0;
            for(int i=0;i<str.length();i++)
            {
                if(str[i]==str[str.length()-1-i])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            if(k<=cnt)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
       
    }
return 0;
}