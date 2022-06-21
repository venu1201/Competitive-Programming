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
       
        string c ;
        cin>>c ;
        int ch=0;
        
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==c[0])
            {
               
                if(i%2==0)
                {
                    ch=1;
                    break;
                }
            }
        }
        if(ch==1)
        {
            yes
        }
        else
        no
        
    }
return 0;
}