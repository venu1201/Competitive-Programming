#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin>>n;
        long long int x=pow(2,n);
        long long int arr[n+1];
        long long int l=(x/(n+1));  
        long long int sum=0;
        for(int i=0;i<n-2;i++)
        {
            arr[i]=i+1;
            sum+=arr[i];
        }
        arr[n-2]=l;
        arr[n-1]=l;
        sum+=2*l;
        arr[n]=x-sum;

        for(int i=0;i<n+1;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
        
    }
    return 0;
}