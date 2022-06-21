#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T=9999999999;
    cin>>T;
    
    while(T--)
    {
        long double n;
        cin>>n;

        long double x=sqrt(n);
        long long int y=sqrt(n);
        
        if(x==y)
        {
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
            continue;
        }
        else
        {
            n--;
            int ch=0;
            for(long double i=2;i<=20;i++)
            {
                long double h=(i*i)*n;
                for(long double j=1;j<1e6;j++)
                {
                    x=sqrt(h+(j*j));
                    y=sqrt(h+(j*j));
                   
                    if(x==y)
                    {
                        cout<<2<<endl;
                        cout<<i<<" "<<n<<endl;
                         cout<<j<<" "<<1<<endl;
                        ch=1;
                        break;
                    }

                }
                if(ch==1)
                {
                    break;
                }
            }
            if(ch==0)
            {
                cout<<T<<endl;
            }
        }
    }
return 0;
}