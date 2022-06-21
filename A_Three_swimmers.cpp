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
        int k,a,b,c;
        cin>>k>>a>>b>>c;
        
        
        vector<int> arr={a,b,c};
        cout<<*min_element(arr.begin(),arr.end())-k<<endl;
    }
return 0;
}