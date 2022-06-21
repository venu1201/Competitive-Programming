#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<0<<" "<<n<<endl;
        cout<<n<<" "<<0<<endl;
        cout<<0<<" "<<-n<<endl;
        cout<<-n<<" "<<0<<endl;
    }
return 0;
}