#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,count=0;
    cin>>n;
    vector<long long int> arr(n);
    
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(long long int i=0;i<n;i++)
    {
        long long int x=arr[i+1];
        for(long long int j=i+1;j<n;j++)
        {
            if(arr[i]<x)
            {
                count++;
                break;
            }
            else
            {
                
                if(x<=arr[j])
                {
                    count++;
                    x=arr[j];
                }
            }
        }
    }
    cout<<count<<endl;
    return 0;
}