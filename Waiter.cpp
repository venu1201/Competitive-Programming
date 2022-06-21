#include<bits/stdc++.h>
using namespace std;
bool prime(long long int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main()
{
    long long int n,q;
    cin>>n>>q;
    vector<long long int> primes;
    long long int test=2;
    while(primes.size()!=q)
    {
        if(prime(test)==true)
        {
            primes.push_back(test);
        }
        test++;
    }
    vector<long long int> arr(n);
    for(long long int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<long long int> ans;
    for(long long int i=0;i<q;i++)
    {
        if(i%2==0)
        {
        for(long long int j=0;j<n;j++)
        {
            if(arr[j]!=0)
            {
                if(arr[j]%primes[i]==0)
                {
                    cout<<arr[j]<<endl;
                    arr[j]=0;
                }
            }
        }
        }
        else
        {
            for(long long int j=n-1;j>=0;j--)
        {
            if(arr[j]!=0)
            {
                if(arr[j]%primes[i]==0)
                {
                    cout<<arr[j]<<endl;
                    arr[j]=0;
                }
            }
        }
        }
    }
    if(q%2!=0)
    {
    for(long long int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            cout<<arr[i]<<endl;
        }
    }
    }
    else
    {
       for(long long int i=n-1;i>=0;i--)
    {
        if(arr[i]!=0)
        {
            cout<<arr[i]<<endl;
        }
    } 
    }
}