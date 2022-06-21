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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long int sum=0,a=0,b=0,max=-999999999,ch=0;
        for(long long int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                sum+=arr[i];
            }
            if(i%2==1)
            {
                sum-=arr[i];
            }
            if(sum>max)
            {
                if(ch%2==0)
                {
                    a=b;
                    
                    b=i;
                }
                else
                {
                    a=b;
                    b=i;
                }
                ch++;
                max=sum;
            }
        }
        if(a>b)
        {
            int t=a;
            a=b;
            b=a;
        }
        vector<long long int> ans;
        for(long long int i=0;i<n;i++)
        {
            if(i<a || i>b)
            {
                ans.push_back(arr[i]);
            }
        }
        
        for(long long int i=0;i<=n;i++)
        {
            if(i>=a && i<=b)
            {
            ans.push_back(arr[i]);
            }
        }
        long long int ret=0;
        for(long long int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                ret+=ans[i];
            }
            else
            {
                ret-=ans[i];
            }
        }
        cout<<ret<<endl;
    }
return 0;
}