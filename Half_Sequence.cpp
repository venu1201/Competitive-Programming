#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long int T;
    cin>>T;
    while(T--)
    {
        float n;
        cin>>n; 
        vector<long long int> arr;
        for(long long int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            if(x%2==0)
            {
                arr.push_back(x);
            }
        } 
        sort(arr.begin(),arr.end());
        long long int k=ceil(n/2.0);
        if(arr.size()<k)
        {
            cout<<"NO"<<endl;
        }
        else if(arr[0]==2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            long long int check=arr[0];
            long long int i=0;
            for(long long int i=1;i<k-1;i++)
            {
                
                check=__gcd(arr[i],check);
            }
            if(check==2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                long long int j=i+1,ch=0;
                for(;j<arr.size();j++)
                {
                    if(__gcd(check,arr[j])==2)
                    {
                        ch=1;
                        break;
                    }
                }
                if(ch==1)
                {
                    cout<<"YES"<<endl;
                }
                else
                cout<<"NO"<<endl;
            }
        }
        
            
        
    }
    return 0;
}