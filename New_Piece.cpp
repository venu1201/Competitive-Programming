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
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c && b==d)
        {
            cout<<"0"<<endl;
            continue;
        }
        long long int ch=(a+b)%2;
        long long int th=(c+d)%2;
        if(ch==th)
        {
            cout<<"2"<<endl;
        }
        else
        {
            cout<<"1"<<endl;
        }
    }
return 0;
}