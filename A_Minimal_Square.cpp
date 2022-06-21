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
    vector<int> arr;
    for(int i=1;i<=10000;i++)
    {
        arr.push_back(i*i);
    }
    while(T--)
    {
        int a,b;
        cin>>a>>b;
        int area=2*a*b;
        cout<<area<<endl;
        auto it=lower_bound(arr.begin(),arr.end(),area);
        cout<<arr[it-arr.begin()]<<endl;

    }
return 0;
}