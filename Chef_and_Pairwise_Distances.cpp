#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
   int t;
   cin>>t;
   while(t--)
   {
       ll n;
       cin>>n;
       vector<ll>v(n);
       vector<ll>even;
       
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
           if(v[i]%2==0)
           {
               even.push_back(v[i]);
              
           }
       }
       int len = ceil((double)n/2);
        if(even.size()<len){
            cout<<"NO\n";
        }
        else{
            sort(even.begin(),even.end());
            if(even[0]==2){
                cout<<"YES\n";
            }
            else{
                long long val = even[0];
                int i = 0;
                for(i = 1; i<len-1; i++){
                    val = __gcd(val,even[i]);
                }
                if(val==2){
                    cout<<"YES\n";
                }
                else{
                    long long cont = i+1; bool flag = false;
                    for(int j = cont; j<even.size(); j++){
                        if(__gcd(val,even[i])==2){
                            flag = true;
                            break;
                        }
                    }
                    if(flag){
                        cout<<"YES\n";
                    }
                    else{
                        cout<<"NO\n";
                    }
                }
            }
        }
   }
	return 0;
}
