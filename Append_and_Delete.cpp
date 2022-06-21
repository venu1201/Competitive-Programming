#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int k;
    cin>>k;
    int sl=s.length(),res,tl=t.length();
    for(int i=0;i<sl>tl?tl:sl;i++)
    {
        if(s[i]!=t[i])
        {
            res=i;
            break;
        }
    }

        if((sl-res)+(tl-res)<=k)
        {
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;
    
    return 0;
}