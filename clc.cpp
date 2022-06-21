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
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a=max(arr[0],arr[1]);
    int b=min(arr[0],arr[1]);
    for(int i=2;i<n;i++)
    {
        if(a<arr[i])
        {
            b=a;
            a=arr[i];
        }
        else if(b<arr[i])
        {
            b=arr[i];
        }
    }
    cout<<a<<" "<<b<<endl;
return 0;
}