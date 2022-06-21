#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,m;
        cin>>n>>m;
        
        for(int i=0;i<n;i++)
        {
            vector<long long int> arr(m);
            for(int j=0;j<m;j++)
            {
                cin>>arr[j];
            }
            if(i%2==0)
            {
                sort(arr.begin(),arr.end());
                for(int k=0;k<m;k++)
                {
                    cout<<arr[k]<<" ";
                }cout<<endl;
            }
            if(i%2==1)
            {
                sort(arr.begin(),arr.end(),greater<int>());
                for(int k=0;k<m;k++)
                {
                    cout<<arr[k]<<" ";
                }cout<<endl;
            }
        }
        
        
    }
    return 0;
}