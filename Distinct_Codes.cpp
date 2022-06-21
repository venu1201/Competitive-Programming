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
        if(str.length()==2)
        {
            cout<<1<<endl;
            continue;
        }
        set<string> st;
        string ans="";
        for(int i=0;i<str.length()-1;i++)
        {
            ans.push_back(str[i]);
            ans.push_back(str[i+1]);
            st.insert(ans);
            ans="";
        }
        cout<<st.size()<<endl;
    }
return 0;
}