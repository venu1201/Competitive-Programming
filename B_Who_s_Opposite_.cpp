#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int r=abs(b-a);
        if(2*r<a || 2*r<b || 2*r<c)
        {
            cout<<"-1"<<endl;
            continue;
        }
        else
        {
            if(c+r>2*r)
            {
                cout<<c-r<<endl;
            }
            else
            {
                cout<<c+r<<endl;
            }
        }
    }
    return 0;
}