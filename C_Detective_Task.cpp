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
        int x=find(str.begin(),str.end(),'0')-str.begin();

        reverse(str.begin(),str.end());
        int y=find(str.begin(),str.end(),'1')-str.begin();
        
        y=str.size()-1-y;
        int a=count(str.begin(),str.end(),'1');
        int b=count(str.begin(),str.end(),'0');
        
        if(a==0 && b==0)
        cout<<str.size()<<endl;
        else if(a==0 && b!=0)
        {
            cout<<x+1<<endl;
        }
        else if(b==0 && a!=0)
        {
            cout<<str.size()-y<<endl;
        }
        else
        {
            cout<<max(x,y)-min(x,y)+1<<endl;
        }
    }
return 0;
}