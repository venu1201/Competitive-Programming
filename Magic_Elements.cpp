#include <bits/stdc++.h>
#include <iostream>

 
using namespace std;


int main(){
   long long int t;cin>>t;
   for(long long int j=0;j<t;j++)
    {
 
  long long int  n,x,i,k,sum{},c{};
  cin>>n>>k; 
   long long int a[n];
     for(i=0;i<n;i++)
     {
         
        
    cin>>a[i];
    sum+=a[i];
     }
    sort(a,a+n);
for(i=n-1;i>=0;i--)
     {
          if(a[i]+k>sum-a[i])c++;
         else break;
     }
    
cout<<c<<endl;




    }
    
  
    
    
    return 0;
    
}