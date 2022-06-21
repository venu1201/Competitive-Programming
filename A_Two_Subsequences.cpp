#include<iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

int main()
{

 long long int t;cin>>t;
 
 while(t--)
 {
     long long int n,i,k=999999,a{},b{},c{-999999},d{},x=0,sum{},j=0;
long long int y=0;
     string s,t;
cin>>s;
  map<long long,long long> m;
  t=s;
  sort(t.begin(),t.end());
  m[t[0]-'a']++;
cout<<t[0]<<" ";
  for(i=0;i<s.size();i++)
{         

    if(s[i]==t[0] && m[t[0]-'a']>0)
    {
        m[t[0]-'a']--;
    }
    else cout<<s[i];
    
}

     cout<<endl;
      


 }

 



	return 0;
}