#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    string str="()[]{}";
    stack<char> st;
    st.push('1');
    map<char,char> mp;
    mp['{']='}';
    mp['(']=')';
    mp['[']=']';
    for(int i=0;i<str.length();i++)
    {
        if(mp[st.top()]==str[i])
        {
            st.pop();
            continue;
        }
        st.push(str[i]);
        
    }
    cout<<st.size();
return 0;
}