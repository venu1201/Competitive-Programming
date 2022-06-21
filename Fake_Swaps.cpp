#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin>>n;
        string s,p;
        cin>>s;
        cin>>p;
        long long int count=0,one=0,zero=0,one1=0,zero1=0;
        for(long long int i=0;i<n;i++)
        {
            if(s[i]!=p[i])
            {
                if(s[i]=='0')
                {
                    s[i]=97;
                    zero++;
                }
                else if(s[i]=='1')
                {
                    s[i]=97;
                    one++;
                }
                count++;
            }
            if(count>3)
            {
                break;
            }
        }
        if(count>3)
        {
            cout<<"NO"<<endl;
        }
        else if(s==p)
        {
            cout<<"YES"<<endl;
        }
        else if(count==3)
        {
            if(zero==0 )
                {
                    cout<<"NO"<<endl;
                }
                else if(one==0 )
                {
                    cout<<"NO"<<endl;
                }
                else
                cout<<"YES"<<endl;
        }
        else
        {
            
              for(long long int i=0;i<n;i++)
                {
                    if(s[i]=='1')
                    {
                        one1++;
                    }
                    else if(s[i]=='0')
                    {
                        zero1++;
                    }
                }
                 if(zero==0 && one1==0)
                {
                    cout<<"NO"<<endl;
                }
                else if(one==0 && zero1==0)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }
            
        }
    }
    return 0;
}