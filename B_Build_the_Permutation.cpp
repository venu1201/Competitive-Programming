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
        long long int n,a,b;
        cin>>n>>a>>b;
        long long int l=1,r=n;
        if(a+b+2<=n && abs(a-b)<=1)
        {
            if(a==b)
            {
                
                for(int i=0;i<a+b+2;i++)
                {
                    if(i%2==0)
                    {
                    cout<<l<<" ";
                    l++;
                    
                    }
                    else
                    {
                        cout<<r<<" ";
                        r++;
                        
                    }
                }
                if(a+b+2<n)
                {
                    
                        for(int i=0;i<n-(a+b+2);i++)
                        {
                            r++;
                            cout<<r<<" ";
                        }
                    
                }
                cout<<endl;
            }
            else if(a>b)
            {
                for(int i=0;i<a+b+2;i++)
                {
                    if(i%2==0)
                    {
                    cout<<l<<" ";
                    l++;
                    
                    }
                    else
                    {
                        cout<<r<<" ";
                        r--;
                        
                    }
                }
                if(a+b+2<n)
                {
                    
                        for(int i=0;i<n-(a+b+2);i++)
                        {
                            l--;
                            cout<<l<<" ";
                        }
                    
                }
                cout<<endl;
            }
            else
            {
                for(int i=0;i<a+b+2;i++)
                {
                    if(i%2==1)
                    {
                    cout<<l<<" ";
                    l--;
                    
                    }
                    else
                    {
                        cout<<r<<" ";
                        r++;
                        
                    }
                }
                if(a+b+2<n)
                {
                    
                        for(int i=0;i<n-(a+b+2);i++)
                        {
                            l--;
                            cout<<l<<" ";
                        }
                    
                }
                cout<<endl;
            }
        }

    }
return 0;
}