#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int G;
        cin>>G;
        while(G--)
        {
            int a,b,c;
            cin>>a>>b>>c;
            if(a==1)
            {
                if(b%2==1)
                {
                    if(c==1)
                    {
                        cout<<(b/2)<<endl;
                    }
                    else if(c==2)
                    {
                        cout<<(b/2)+1<<endl;
                    }
                }
                else
                {
                    cout<<b/2<<endl;
                }
            }
            if(a==2)
            {
                if(b%2==1)
                {
                    if(c==1)
                    {
                        cout<<(b/2)+1<<endl;
                    }
                    else if(c==2)
                    {
                        cout<<(b/2)<<endl;
                    }
                }
                else
                {
                    cout<<b/2<<endl;
                }
            }
            
        }
    }
    return 0;
}