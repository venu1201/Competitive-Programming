#include <bits/stdc++.h>
using namespace std;

int main()
 {
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,ans=1,i=0,j=0;
        vector<long long int >v;
        cin>>n>>k;
        string s;
        cin>>s;
        int first=0,res=0,l=k;
       
        while(i<n)
        { 
            if(s[i]=='1')
            {
                res=i;
                j=1+i;
                while(k-- && j!=n)
                {
                    if(s[j]=='1')
                    {
                        res=j;
                        k=l;
                    }
                   
                    j++;
                      
                }
                v.push_back(res+1);
                i=res+l+1;
            }
            else
            i++;
           
        }
        
        for(long long int i=0;i<v.size()-1;i++)
        {
            
           
            if(abs(v[i]-v[i+1])>l+2)
            {
             ans++;  
            }
        }
        
        cout<<ans<<endl;
    }
  
  return 0;
}