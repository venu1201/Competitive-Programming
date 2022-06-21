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
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n==2)
        {
            cout<<2<<" "<<1<<endl;
            continue;
        }
        cout<<1<<" ";
        long long int x=3;
        for(int i=1;i<n-1;i++)
        {
            cout<<x<<" ";
            x++;
        }
        cout<<2<<endl;
       
    }
return 0;
}