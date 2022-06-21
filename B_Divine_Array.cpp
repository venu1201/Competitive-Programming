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
        vector<long long int> arr(n);
        vector<vector<long long int>> ans;
        map<long long int,long long int> mp;
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        ans.push_back(arr);
        int ll=20;
        while(ll--)
        {
            int check=0;
            for(auto it:mp)
            {
                if(it.first!=it.second)
                {
                    check=1;
                    break;
                }
            }
            if(check==1)
            {
            for(long long int i=0;i<n;i++)
            {
                long long int d=mp[arr[i]];
                arr[i]=d;  
            }
            ans.push_back(arr);
            mp.clear();
            for(long long int i=0;i<n;i++)
                {
            
                    mp[arr[i]]++;
                }
            }
            else
            {
                break;
            }
        }
        
        long long int q;
        cin>>q;
        while(q--)
        {
            
           long long int h,k;
           cin>>h>>k;
           if(k>20)
           {
               cout<<ans[ans.size()-1][h-1]<<endl;
           }
           else
           {
               cout<<ans[k][h-1]<<endl;
           }
        }
        
        

    }
}