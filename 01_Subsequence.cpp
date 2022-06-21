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
        vector<long long int> a,b;
        vector<long long int> arr;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            if(i%2==0)
            {
                
                a.push_back(x);
            }
            else
            {
                b.push_back(x);
            }
        }
        sort(b.begin(),b.end());
        sort(a.begin(),a.end(),greater<int>());
        long long int j=0,k=0;
        for(long long int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                arr.push_back(a[j]);
                j++;
            }
            else
            {
                arr.push_back(b[k]);
                k++;
            }
        }
        long long int sum=0,res=0;
        for(long long int i=0;i<n;i+=2)
        {
            sum=0;
            for(long long int j=i+1;j<n;j+=2)
            {
                sum+=arr[j];
            }
            res+=sum*arr[i];
        }
        for(long long int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
        cout<<res<<endl;
    }
    return 0;
}