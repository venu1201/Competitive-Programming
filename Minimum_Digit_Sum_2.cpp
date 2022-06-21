#include<bits/stdc++.h>
using namespace std;
bool check(int x, int y)
{
    
    int res1 = log(y) / log(x);
    double res2 = log(y) / log(x); 

    return (res1 == res2);
}
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,r;
        cin>>n>>r;
        long long int d=n,sum=0,min=9999999999999,res;
        
        if(2<=n && r>=n)
        {
            cout<<n<<endl;
            continue;
        }
        if(2>n)
        {
            cout<<"2"<<endl;
            continue;
        }
        for(long long int i=2;i<=r;i++)
        {
            d=n;
            if(check(i,d))
            {
                res=i;
                break;
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