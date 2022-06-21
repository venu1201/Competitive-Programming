#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin>>n;
        long long int l=2*(n-2);
        long long int x=((n-1)*l)/2;
        cout<<x+1<<"\n";

    }
    return 0;
}