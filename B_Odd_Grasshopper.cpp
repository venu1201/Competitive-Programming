#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,k,x,y;
        cin>>n>>k;
        if(k==0)
        {
            cout<<n<<endl;
            continue;
        }
        k=k-1;
        if(n%2==0)
        {
            long long int l=k%4;
            
            n=n+(-4)*(k/4)-1;

            long long int sum=0,f=4*(k/4),i=0;
            f++;
            
            while(i<l)
            {
                if(i<2)
                {
                    sum+=++f;
                }
                else
                {
                    sum-=++f;
                }
                i++;
            }
            n+=sum;
            cout<<n<<endl;
        }
        else
        {
             long long int ll=k%4;
            
            n=n+(4)*(k/4)+1;

            long long int summ=0,ff=4*(k/4),ii=0;
            ff++;
            
            while(ii<ll)
            {
                if(ii<2)
                {
                    summ-=++ff;
                }
                else
                {
                    summ+=++ff;
                }
                ii++;
            }
            n+=summ;
            cout<<n<<endl;
        }
    }
}