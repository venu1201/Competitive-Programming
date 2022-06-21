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
        long long int n,sum=0;
        cin>>n;
        vector<long long int> arr(n+2);
        for(long long int i=0;i<n+2;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        vector<long long int> ans;
        sort(arr.begin(),arr.end());
        sum-=arr[n+1];
        if(sum-arr[n]==arr[n] || sum-arr[n]==arr[n+1])
        {
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
            continue;
        }
        int ch=1;
        for(int i=0;i<n+1;i++)
        {
            if(sum-arr[i]==arr[n+1])
            {
                for(int j=0;j<n+1;j++)
                {
                    if(j!=i)
                    {
                        cout<<arr[j]<<" ";
                    }
                }cout<<endl;
                ch=0;
                break;
            }
        }
        if(ch==1)
        {
            cout<<-1<<endl;
        }

        
    }
return 0;
}