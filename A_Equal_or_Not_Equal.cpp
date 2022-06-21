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
     string str;
     cin>>str;
     if(count(str.begin(),str.end(),'N')==1)
     {
         cout<<"NO"<<endl;
     }
     else
     {
         cout<<"YES"<<endl;
     }
    }
return 0;
}