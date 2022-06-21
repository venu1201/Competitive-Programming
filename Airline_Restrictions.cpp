#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,l,r;
        cin>>n>>l>>r;
        long long int d=n,sum=0,min=9999999999999,res;
        for(long long int i=l;i<=r;i++)
        {
            d=n;
            if(d==i)
            {
                sum=1;
            }
            else if(d<i)
            {
                sum=i;
            }
            else
            {
            while(d>0)
            {
                sum+=d%i;
                if(sum>min)
                {
                    break;
                }
                d=d/i;
            }
            }
            if(sum<min)
            {
                min=sum;
                res=i;
               
            }
            sum=0;
        }
        cout<<res<<endl;
        
    }
    return 0;
}