#include<iostream>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    for(long long int i=0;i<T;i++)
    {
        long long int n,m,x,y;
        cin>>n>>m>>x>>y;
        if(m==1 && n==1)
        {
            cout<<x<<endl;
        }
        if(m==0 && n==0)
        {
            cout<<"0"<<endl;
        }
        if(y/2>=x)
        {
            cout<<n*m*x<<endl;
        }
        else
        {
            long long int p=y/2;
            long long int q=y%2+p;
            
            if(p>q)
            {
                long long int t=p;
                p=q;
                q=t;
            }
            if(m%2==0)
            {
                cout<<n*(m/2)*(y)<<endl;
            }
            else
            {
                long long int h=m/2;
                long long int b=m%2+h;
                long long int h1=n/2;
                long long int b1=n%2+h1;
                if(h>b)
                {
                long long int t1=h;
                h=b;
                b=t1;
                }
                if(h1>b1)
                {
                long long int t2=h1;
                h1=b1;
                b1=t2;
                }
                long long int i=h*p+b*q;
                long long int j=h*q+b*p;
                if(i>j)
                {
                    long long int t4=i;
                    i=j;
                    j=t4;
                }
                if(n%2==0)
                {                   
                    cout<<i*(n/2)+j*(n/2)<<endl;
                }
                else
                {
                    cout<<j*b1+i*h1<<endl;
                }
            }
        }
    }
    return 0;
}