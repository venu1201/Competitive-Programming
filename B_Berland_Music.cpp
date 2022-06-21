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
        int n;
        cin>>n;
        vector<int> a,b;
        vector<int > ans;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ans.push_back(x);
        }
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='1')
            {
                a.push_back(ans[i]);
            }
            else
            {
                b.push_back(ans[i]);
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        map<int,int> mp,mp2;
        int cnt=1;
        for(int i=0;i<b.size();i++)
        {
            
            mp[b[i]]=cnt;
            
            cnt++;
         
        }
        
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]=cnt;
          
            cnt++;
          
        }
       
             for(int i=0;i<n;i++)
            {
                cout<<mp[ans[i]]<<" ";
            }cout<<endl;
        
    }
return 0;
}