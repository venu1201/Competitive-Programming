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
        map<int,int> mp;
        for(auto it:str)
        {
            mp[it]++;
        }
        if(mp.size()==1)
        {
            yes
        }
        else
        {
             int h=1;
            for(int i=0;i<str.size()-1;i++)
            {
                if(str[i]==str[i+1])
                {
                    h=0;
                    break;
                }
            }
        if(h==0)
        {
                no
                continue;
        }
            map<char,int> m,hp;
            for(int i=0;i<str.size();i++)
            {
                if(m[str[i]]==0)
                {
                    m[str[i]]=i+1;
                }
                
            }
            int x=1+0,j=0;
            
            for(auto it:str)
            {
                hp[it]++;
                int l=999999999999999;
                for(auto it:hp)
                {
                    l=min(l,it.second);
                }

                if(abs(l-hp[it])>1)
                {
                    j=1;
                    no;
                    break;
                }
                else if(hp[it]==2 && m[it]==x)
                    x++;
                else if(hp[it]==2 && m[it]!=x)
                {
                    j=1;
                    no
                    break;
                }

            }
            if(j==0)
                yes

            
        }
    }
return 0;
}