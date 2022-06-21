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
        long long int cnt=0;
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==1)
            {
                cnt++;
            }
        }
        if(cnt%2==0)
        {
            cout<<cnt/2<<endl;
        }
        else if(cnt%2==1)
        {
            cout<<(cnt-1)/2<<endl;
        }
    }
return 0;
}