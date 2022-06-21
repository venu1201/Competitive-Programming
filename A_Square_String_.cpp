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
        long long int n;
        n=str.length();
        if(n%2==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            long long int x=n/2,cnt=1;

            for(long long int i=0;i<x;i++)
            {
                if(str[i]!=str[x+i])
                {
                    cout<<"NO"<<endl;
                    cnt=0;
                    break;
                }
            }
            if(cnt==1)
            {
                cout<<"YES"<<endl;
            }
        }
    }
return 0;
}