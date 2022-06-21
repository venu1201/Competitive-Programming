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
        for(int i=1;i<=n;i++)
        {
            arr[i-1]=i;
        }
        if(k==n)
        {
            for(auto it:arr)
            {
                cout<<it<<" ";
            }cout<<endl;
            continue;
        }
        if(k==0)
        {
            cout<<-1<<endl;
            continue;
        }
        k=n-k;
        if(k%2==0)
        {

            int x=n-1;
            while(k)
            {
                swap(arr[x],arr[x-1]);
                x-=2;
                k-=2;
            }
        }
        else
        {
            swap(arr[1],arr[0]);
            k--;
            int x=n-1;
            while(k)
            {
                swap(arr[x],arr[x-1]);
                x-=2;
                k-=2;
            }
        }
        for(auto it:arr)
        {
            cout<<it<<" ";
        }cout<<endl;


    }
return 0;
}