#include<bits/stdc++.h>
using namespace std;
int main(){
  int k,s,ans=0;
  cin>>k>>s; 
  for(int i=0;i<=k;i++)
  {
    
      
      if(s-i>=0&&s-i<=2*k)
      {
        
        ans+=ans;
      }
    
  }
  cout<<ans<<endl;
  return 0;
}