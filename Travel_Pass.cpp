#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,a,b;
        cin>>n>>a>>b;
        string str;
        cin>>str;
        long long int la=count(str.begin(),str.end(),'1');
        long long int lb=count(str.begin(),str.end(),'0');
        cout<<(b*la)+(a*lb)<<endl;
    }
    return 0;
}