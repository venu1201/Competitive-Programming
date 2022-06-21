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
        long long int check=0;
        for(long long int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            {
                cout<<"-1"<<endl;
                check=1;
                break;
            }
            if(arr[i]%arr[i-1]!=0 && arr[i-1]%arr[i]!=0)
            {
                cout<<"-1"<<endl;
                check=1;
                break;

            }
        }
        if(check==1)
        {
            continue;
        }
        else
        {
            for(long long int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }cout<<endl;
        }

    }
return 0;
}