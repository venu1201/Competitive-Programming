#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{   
        int n;
        cin>>n;
        vector<int> arr(n);
        int cnt=0;
        vector<int > x;
        int mod=1e9 + 7;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>0)
            {
                cnt++;
                x.push_back(arr[i]);
            }
        }
        int j;
        
        sort(x.begin(),x.end());
        if(cnt%2==1)
        {
            j=0;
        }   
        else
        {
            j=1;
        }   
        int ans=0;
        while(j<x.size())
        {
            
            ans+=x[j];
            j+=2;
        } 
       
        cout<<ans<<endl;

    
return 0;
}