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
        long long int n,k;
        cin>>n>>k;
        vector<long long int> arr(n);
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long int x=1,y=n,h=-1,ch=1;
        while(count(arr.begin(),arr.end(),0)!=arr.size())
        {
            
            for(int i=0;i<n;i++)
            {
                sum+=arr[i]*x;
                if(arr[i]==0)
                {
                    ch=0;
                    break;
                }
                else if(arr[i]%k==0)
                {
                    arr[i]=arr[i]/k;
                }
                else
                {
                    arr[i]=0;
                }
            }
            if(ch==0)
            {
                break;
            }
            
            x*=k;       
        }
        cout<<sum<<endl;
        
    }
return 0;
}