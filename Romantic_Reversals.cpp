#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        string ans="";
        int c=0,x=0,y=k-1;
        long long int ch=k;
        while(k--)
        {
            if(c%2==0)
            {
                ans+=str[x];
                x++;
                c++;
            }
            else
            {
                ans+=str[y];
                y--;
                c++;
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i=ch;i<n;i++)
        {
            ans+=str[i];
        }
        cout<<ans<<endl;
    }
return 0;
}