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
        string s;
        cin>>s;
        string str="";
        int h=1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1' || h==0)
            {
                str+=s[i];
                h=0;
            }
        }
        h=1;
        reverse(str.begin(),str.end());
        string strr="";
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='1' || h==0)
            {
                strr+=str[i];
                h=0;
            }
        }
        if(strr.size()==0)
        {
            cout<<0<<endl;
            continue;
        }
        reverse(strr.begin(),strr.end());
        vector<int> ar,br;
        int hh=1,cnt=0;
        for(int i=0;i<strr.size();i++)
        {
            if(strr[i]=='1')
            {
                br.push_back(cnt);
                cnt=0;
            }
            else
            {
                cnt++;
            }
        }
        hh=1,cnt=0;
        for(int i=strr.size()-1;i>=0;i--)
        {
            if(strr[i]=='1')
            {
                ar.push_back(cnt);
                cnt=0;
            }
            else
            {
                cnt++;
            }
        }
        reverse(ar.begin(),ar.end());
        int a=0,b=br.size()-1;
        int ans=accumulate(ar.begin(),ar.end(),0);
        int jp=ans;
        int jl=0;
        while(a!=b)
        {
            if(ar[a]>ar[b])
            {
                jl++;
                ans=min(ans,max(jl,jp-ar[a]));
                jp=jp-ar[a];
                a++;
            }
            else
            {
                jl++;
                ans=min(ans,max(jl,jp-br[b]));
                jp=jp-br[b];
                b--;
            }
        }
        jl=ar.size();
        ans=min(ans,jl);
        cout<<ans<<endl;
        
       
    }
return 0;
}