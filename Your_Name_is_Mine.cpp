#include<iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;


void solve(string s){
 
    int i=0,j=0,n=s.size(),check=1;
   while(check){
   check=0; 
   char d='a';
   string t; 
   int p=0;

    for(i=1;i<n;i++){   
   if(s[i-1]+1==s[i]){
      check=1;
       if(s[i]>=d){
         p=i;
       }

   }
    }


    if(check==0)break;
      
      for(i=0;i<n;i++){
        if(i==p)continue;
        if(i==p-1){
         t.push_back(s[p]+1);
        }
        else
        t.push_back(s[i]);
      }
      
    s=t;
    cout<<s<<endl;

   }


   


}


int main()
{

 
 {
  string s;
  cin>>s;
    solve(s);
 }

 



	return 0;
}