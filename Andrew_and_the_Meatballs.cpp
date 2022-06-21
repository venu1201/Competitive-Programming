#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long int n,m;
        cin>>n>>m;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long int count=0,sum=0,check=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=arr[i];
            count++;
            if(sum>=m)
            {
                check=1;
                break;
            }

        }
        if(check==0)
        cout<<"-1"<<endl;
        else
        cout<<count<<endl;
        
        
    }
    return 0;
}