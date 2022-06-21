#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define debug1dv(arr){ for(auto it:arr) cout<<it<<" "; cout<<endl;}
#define debug2dv(arr){for(auto it:arr){for(auto x:it)cout<<x<<" "; cout<<endl;}}
#define debugmap(mp){for(auto it:mp) cout<<it.first<<"->"<<it.second<<endl;}
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
        string ans="";
        if(str[0]=='9')
        {
            int c=0;
            for(int i=n-1;i>=0;i--)
            {
                if(str[i]=='1' && c==0)
                {
                    c=0;
                    ans+='0';
                }
                else if(str[i]=='0')
                {
                    if(c==1)
                    {
                        ans+='0';
                    }
                    else
                    {
                        ans+='1';
                    }
                    c=0;
                    
                }
                else 
                {
                    int x=str[i]-'0';
                    if(c==1)
                        x++;
                    x=11-x;
                    char ch=x+48;
                    ans+=ch;
                    c=1;
                }
                
            }
            reverse(ans.begin(),ans.end());
           
        }
        else
        {
             for(int i=0;i<n;i++)
            {
                int x=str[i]-'0';
                   
                    x=9-x;
                    char ch=x+48;
                    ans+=ch;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}