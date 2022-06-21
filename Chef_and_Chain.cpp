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
        string str;
        cin>>str;
        string a="",b="";
        long long int n=str.length();
        string x="+",y="-";
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                a+=x;
                b+=y;
            }
            else
            {
                a+=y;
                b+=x;
            }
        }
        long long int cnt1=0,cnt2=0;
        for(long long int i=0;i<n;i++)
        {
            if(str[i]!=a[i])
            {
                cnt1++;
            }
            if(str[i]!=b[i])
            {
                cnt2++;
            }
        }
        cout<<min(cnt1,cnt2)<<endl;
    }
return 0;
}