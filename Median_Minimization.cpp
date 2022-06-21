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
        vector<long long int> arr(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        cout<<abs(arr[n/2]-arr[(n/2)-1])<<endl;
        
       

    }
return 0;
}