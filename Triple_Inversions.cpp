#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
using namespace std;
void fun(char x)
{
    if(x=='A')
    {
        cout<<x<<endl;
        return;
    }
    if(x%2==0)
    {
        cout<<x<<endl;
        fun(x-1);
    }
    else 
    {
        fun(x-1);
        cout<<x<<endl;
    }
}
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    fun(70);
return 0;
}