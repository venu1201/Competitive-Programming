#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define debug1dv(arr){ for(auto it:arr) cout<<it<<" "; cout<<endl;}
#define debug2dv(arr){for(auto it:arr){for(auto x:it)cout<<x<<" "; cout<<endl;}}
#define debugmap(mp){for(auto it:mp) cout<<it.first<<"->"<<it.second<<endl;}
using namespace std;
int largestNum(int n)
{
 
    int num = 0;
 
   
    for (int i = 0; i <= 32; i++)
    {
        
        int x = (1 << i);
 
        if ((x - 1) <= n)
            num = (1 << i) - 1;
 
        else
            break;
    }
 
    
    return num;
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
        int a,b;
        cin>>a>>b;
        int x=largestNum(b);
        string str,str2;
        str2 = bitset<64> (x).to_string();
        if(a==1)
        {
            str = bitset<64> (b).to_string();
            int x=count(str.begin(),str.end(),'1');
            cout<<x<<endl;
        }
        else
        {
            if(b/x <=a )
            {
                int cnt=b/x;
                int ans=cnt*count(str2.begin(),str2.end(),'1');
                int k=x*cnt;
                k=b-k;
                str2 = bitset<64> (k).to_string();
                ans+=count(str2.begin(),str2.end(),'1');
                cout<<ans<<endl;
            }
            else
            {
                int cnt=a-1;
                int ans=cnt*count(str2.begin(),str2.end(),'1');
                int k=x*cnt;
                k=b-k;
                str2 = bitset<64> (k).to_string();
                ans+=count(str2.begin(),str2.end(),'1');
                cout<<ans<<endl;
            }
        }
        
    }
return 0;
}