#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int> arr(n);
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cout<<arr[n-1]*arr[n-2]<<endl;
    return 0;
}