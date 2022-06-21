#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n,even=0,odd=0,peven=0,podd=0;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==1)
            {
                odd++;
            }
            else
            even++;

        }
        peven=n/2;
        podd=n-peven;
        long long int sum=podd>=even? even:podd;
        sum+=peven>=odd? odd:peven;
        cout<<sum<<endl;

    }
    return 0;
}