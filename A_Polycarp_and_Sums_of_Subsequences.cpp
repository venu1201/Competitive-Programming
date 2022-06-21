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
        long long int n=7;
        vector<long long int> arr(n);
        for(auto &x:arr)
        {
            cin>>x;
        }
        long long int k=arr[0]+arr[1];
        auto it=find(arr.begin(),arr.end(),k);
        if(it!=arr.end())
        {
            arr.erase(it);
        }
        long long int x=arr[0]+arr[2],y=arr[1]+arr[2],z=arr[0]+arr[1]+arr[2];
        it=find(arr.begin(),arr.end(),x);
         if(it!=arr.end())
        {
            arr.erase(it);
        }
        it=find(arr.begin(),arr.end(),y);
         if(it!=arr.end())
        {
            arr.erase(it);
        }
        it=find(arr.begin(),arr.end(),z);
         if(it!=arr.end())
        {
            arr.erase(it);
        }
        for(auto it:arr)
        {
            cout<<it<<" ";
        }cout<<endl;
    }
return 0;
}