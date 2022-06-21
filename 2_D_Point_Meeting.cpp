#include<bits/stdc++.h>
using namespace std;
long long int fun(vector<pair<long double,long double>> arr,long long int n,long double x,long double y)
{
    long long int res=0;
    for(long long int l=0;l<n;l++)
                {
                long double check=((long double)(y-arr[l].second)/(long double)(x-arr[l].first));
                
                if(x==arr[l].first && y==arr[l].second )
                continue;
                else
                {                  
                    if(check==1 || check==-1 || isinf(check) || isnan(check) ||check==0)
                    {
                        res++;
                        
                    }
                    else
                    
                    {
                        
                       res+=2;
                       
                    }            
                }
                }
                return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,res=0;
        cin>>n;
        vector<pair<long double,long double>> arr(n);
        set<pair<long double,long double>> a;
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i].first;

            
        }
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i].second;
            
        }
        for(long long int i=0;i<n;i++)
        {
            a.insert(make_pair(arr[i].first,arr[i].second));
            a.insert(make_pair(arr[i].first,arr[i].first));
            a.insert(make_pair(arr[i].second,arr[i].second));
            for(long long int j=i+1;j<n;j++)
            {
                long double c1=arr[i].first-arr[i].second;
                long double c2=arr[j].first+arr[j].second;
                long double x=arr[j].first,y=arr[j].second;
                a.insert(make_pair((long double)(c1+c2)/(long double)2,(long double)(c1-c2)/(long double)2));
                a.insert(make_pair(c1+y,y));
                a.insert(make_pair(x,x-c1));
                
                a.insert(make_pair((long double)(c1-c2)/(long double)2,(long double)(c1-c2)/(long double)2));
                
                a.insert(make_pair(x-c1,x-c1));
                a.insert(make_pair((long double)(c1+c2)/(long double)2,(long double)(c1+c2)/(long double)2));
                a.insert(make_pair(c1+y,c1+y));
                
                c1=arr[i].first+arr[i].second;
                c2=arr[j].first-arr[j].second;
                a.insert(make_pair((double)(c1+c2)/(double)2,(double)(c1-c2)/(double)2));
                a.insert(make_pair(c1-y,y));
                a.insert(make_pair(x,x-c1));
                
                a.insert(make_pair((double)(c1+c2)/(double)2,(double)(c1+c2)/(double)2));
                a.insert(make_pair(c1-y,c1-y));
                
                a.insert(make_pair((double)(c1-c2)/(double)2,(double)(c1-c2)/(double)2));
                
                a.insert(make_pair(x-c1,x-c1));
                y=arr[i].second,x=arr[i].first;
               long double y1=arr[j].second,x1=arr[j].first;
               
               a.insert(make_pair(y,y1));
               a.insert(make_pair(x,x1));
               c1=arr[j].first+arr[j].second;
               c2=arr[j].first-arr[j].second;
                a.insert(make_pair(c2+y,y));
                a.insert(make_pair(c1-y,y));
                
                a.insert(make_pair(x1,y));
                a.insert(make_pair(x,x-c2));
                a.insert(make_pair(x,c1-x));
                
                a.insert(make_pair(x,y1));
                
                
            }
        }
        res=9999999999;
        
        for(auto &it : a)
        {
            
               long double h,k;
               h=it.first;
               k=it.second;
               res=min(res,fun(arr,n,h,k)); 
            

        }
        cout<<res<<endl;
        

    }
    return 0;
}