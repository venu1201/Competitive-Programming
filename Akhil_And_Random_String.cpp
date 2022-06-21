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
        string str;
        cin>>str;
        int k;
        cin>>k;
        string ans="";
        
        for(int i=0;i<str.length();i++)
        {
            while(str[i]<ans[ans.size()-1] && (str.length()-i)>(k-ans.length()))
            {
                ans.pop_back();
            }
            if(ans.length()<k)
            {
                ans+=str[i];
            }
           
        }
        cout<<ans<<endl;
    }
return 0;
}