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
         a,b,c,d;
        cin>>a>>b>>c>>d;
        long double y=c/(long double)(pow(10,b));
        long double x=a/(long double)(pow(10,d));
        if(x>y)
        {
            cout<<">"<<endl;
        }
        else if(x==y)
        {
            cout<<"="<<endl;
        }
        else
        {
            cout<<"<"<<endl;
        }
        
    }
return 0;
}