#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,x;
        cin>>n;      
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==0)
            x=a[i];
            else
            {
            x=gcd(x,a[i]);
            
        }
        }
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                x=i;
                break;
            }
        }
        if(x==1)
        cout<<"-1"<<endl;
        else
        cout<<x<<endl;
        
    }
    double h=2;
    cout<<h<<endl;
    return 0;
}