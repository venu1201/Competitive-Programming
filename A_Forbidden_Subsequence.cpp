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
        string str,t;
        cin>>str>>t;
        sort(str.begin(),str.end());  
        map<char,int> mp;
        for(auto it:str)
        {
            mp[it]++;
        }
        auto it=find(str.begin(),str.end(),t[0]);
        if(it==str.end())
        {
            cout<<str<<endl;
            continue;
        }
        int x=it-str.begin();
        it=find(str.begin(),str.end(),t[1]);
        if(it==str.end())
        {
            cout<<str<<endl;
            continue;
        }
        int y=it-str.begin();
        it=find(str.begin(),str.end(),t[2]);
        if(it==str.end())
        {
            cout<<str<<endl;
            continue;
        }
        int z=it-str.begin();
        vector<int> arr={x,y,z};
        if(is_sorted(arr.begin(),arr.end()))
        {
            str="";
            for(int i=0;i<mp['a'];i++)
            {
                str+='a';
            }
            for(int i=0;i<mp['c'];i++)
            {
                str+='c';
            }
            for(auto it:mp)
            {
                if(it.first!='a' && it.first!='c')
                {
                    for(int i=0;i<it.second;i++)
                    {
                        str+=it.first;
                    }
                }
            }
            cout<<str<<endl;
        }
        else
        {
            cout<<str<<endl;
        }

        
    }
return 0;
}