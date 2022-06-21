#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,a,b;
        cin>>n>>a>>b;
        vector<pair<long long int,long long int>> arr(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i].first;
        }
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i].second;
        }
        vector<long long int> tm;
        
        for(long long int i=0;i<a;i++)
        {
            long long int dum;
            cin>>dum;
            tm.push_back(dum);
        }
        for(long long int i=0;i<b;i++)
        {
             long long int dum;
             cin>>dum;
             tm.push_back(dum);
        }
        sort(tm.begin(),tm.end());
        
        long long int sum=0;
        for(long long int i=0;i<n;i++)
        {
            long long int x=arr[i].first-arr[i].second;
           
            if(x==0)
            continue;
            else
            {
                auto it=lower_bound(tm.begin(),tm.end(),x);
                
                if(it==tm.end())
                {
                    while(x<*it && it!=tm.begin())
                    {
                        it--;
                    }
                    
                    x-=*it;
                    sum+=x;
                    tm.erase(it);
                }
                else
                {
                   
                    
                    if(x==*it)
                    {
                        
                        x-=*it;
                        sum+=x;
                        tm.erase(it);
                    }
                    else if(x<*it)
                    {
                        while(x<*it && it!=tm.begin())
                        {
                            it--;
                        }
                         
                        x-=*it;
                        sum+=x;
                        tm.erase(it);
                    }
                    else if(x>*it)
                    {
                      
                        x-=*it;
                        sum+=x;
                        tm.erase(it);
                    }
                }
                
            }
        }
        cout<<sum<<endl;

    }
}