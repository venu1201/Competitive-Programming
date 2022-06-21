#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        if(m==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            m=m*2;
            if(m%2==1)
            {
                int x=m/2;
                int y=m-x;
                cout<<x*n<<" "<<y*n<<" "<<m*n<<endl;
            }
            else
            {
                int x=m/2;
                cout<<(x-1)*n<<" "<<(x+1)*n<<" "<<m*n<<endl;
            }
        }
    }
return 0;
}