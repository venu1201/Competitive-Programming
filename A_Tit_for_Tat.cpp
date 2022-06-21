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
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int index=0;
        while(k>0 && index!=n-1)
        {
            if(arr[index]>k)
            {
                arr[index]=arr[index]-k;
                arr[arr.size()-1]+=k;
                k=0;
            }
            else
            {
                k-=arr[index];
                arr[arr.size()-1]+=arr[index];
                arr[index]=0;
                
                index++;
            }
        }
        for(auto it:arr)
        {
            cout<<it<<" ";
        }cout<<endl;
    }
return 0;
}