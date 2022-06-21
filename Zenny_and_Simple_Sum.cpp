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
       long long int n;
       cin>>n;
       set<long long int> st;
       for(long long int i=0;i<n;i++)
       {
           long long int x;
           cin>>x;
           st.insert(x);
       } 
       long long int sumn=0,sump=0;
       for(auto it:st)
       {
           if(it<0)
           {
               sumn+=it;
           }
           else
           {
               sump+=it;
           }
       }
       cout<<sump<<" "<<sumn<<endl;
    }
return 0;
}