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
        long long int n,k;
        cin>>n>>k;
        vector<long long int> arr(n),pre(n);
        pre[0]=0;
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(long long int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                pre[i]=pre[i-1]+1;
            }
            else
            {
                pre[i]=pre[i-1];
            }
        }
        pre[n-1]=pre[n-2];
        long long int m=-1,l=0,r=k-1,index=-1;
        while(r<=n-1)
        {
            if(m<pre[r-1]-pre[l])
            {
                m=pre[r-1]-pre[l];
                index=l;
            }
            l++;
            r++;
        }
        cout<<m+1<<" "<<index+1<<endl;

    }
return 0;
}