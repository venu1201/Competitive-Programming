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
        long long int a=999999999999999999,b=999999999999999999;
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i%2==0)
            {
                a=min(a,arr[i]);
            }
            else
            {
                b=min(b,arr[i]);
            }
        }
        int ch=0;
        for(long long int i=0;i<n;i++)
        {
            if(arr[i]%a==0)
            {
                if(i%2==1)
                {
                    
                    ch=1;
                    break;
                }
            }
            else
            {
                if(i%2==0)
                {
                    ch=1;
                    break;
                }
            }
        }
        if(ch==0)
        {
            cout<<a<<endl;
        }
        else
        {
            for(long long int i=0;i<n;i++)
        {
            if(arr[i]%b==0)
            {
                if(i%2==0)
                {
                    ch=0;
                    break;
                }

            }
             else
            {
                if(i%2==1)
                {
                    ch=1;
                    break;
                }
            }
        }
        if(ch==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
        }
    }
return 0;
}