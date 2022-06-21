#include<iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std; 
   int k=0;
   map<long long,long long>m;
    void TeddyBear(int n){
       
   
    if(n==42){k=1; return;}

  else  if(n>42 && k==0){

      if(n%2==0)TeddyBear(n/2);
      if(n%3==0 || n%4==0)
      {
          if((n%10)!=0 && ((n%100)/10)!=0)
          {
          TeddyBear(n-((n%10)*((n%100)/10)));
          }
      }
      if(n%5==0)TeddyBear(n-42);
      
     return;

    }

    }


bool fun(int n)
{
    
    if(n==42)
    {
        return true;
    }
    if(n<42)
    {
        return false;
    }
    bool ans=false;
    if(n%2==0)
    {
        ans=ans||fun(n/2);
    }
    if(n%3 ==0 || n%4==0)
    {
        int x=n%10;
        int y=(n%100)/10;
        if(x!=0 && y!=0)
        ans=ans||fun(n-(x*y));
    }
    if(n%5==0)
    {
        ans=ans||fun(n-42);
    }
    return ans;
}
int main()
{
     

 long long int t=1e5;
 while(t--)
 {
     long long int n,i,a{},b{},d{},j=0,c,sum=0;
long long int mod=1e9+7,z;
     
n=t;k=0;
    TeddyBear(n);
    //cout<<k<<" ";
    int x,y;
    
    if(k==1){
        x=1;

    }
    else x=0;
    if(fun(n)==true)
    {
        y=1;
    }
    else
    {
        y=0;
    }
    if(x!=y)
    {
        cout<<n<<endl;
    }
    

   
   
  
 }

	return 0;
}