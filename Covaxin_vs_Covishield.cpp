#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    long long int x,a,b,c,d;
    cin>>x>>a>>b>>c>>d;
    long long int p,q,r,s,t,m;
    cin>>p>>q>>r>>s>>t>>m;
    long long int st=x;
    for(long long int i=0;i<n;i++)
    {

        long long int k=0,l=0,check=0,maxi=-1,maxj=-1;
        while(1)
        {
            long long int xx=(k*((2*a)+((k-1)*b)));
            xx=xx/2;
            if(l>=0)
            {
            while(1)
            {
                
                long long int yy=(l*((2*c)+((l-1)*d)));
                yy=yy/2;
                if(xx+yy<=x)
                {
                    if((maxi+maxj)<=(k+l))
                    {
                        
                        maxi=k;
                        maxj=l;
                        
                    }
                }
                else
                {
                   
                    break;
                }
                
                l++;
                

            }
            }
            if(l>=0)
            {
            l=maxi+maxj-k-1;
            }
            else
            {
                l=0;
            }
            
            if(l<=0)
            {
            if(xx<=x)
            {
               if((maxi+maxj)<=(k))
                    {
                        maxi=k;
                        maxj=0;
                        
                    }
                
                
            }
            else
            break;
            }
            k++;
            
        }
       long long int count=maxi+maxj;
        a=((a+(count*t))%m)+p;
        b=((b+(count*t))%m)+q;
        c=((c+(count*t))%m)+r;
        d=((d+(count*t))%m)+s; 
        cout<<count<<endl;
        
        
        
    }
    return 0;
    
}