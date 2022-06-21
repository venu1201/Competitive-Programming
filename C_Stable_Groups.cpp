#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    
   
        long long int n,k,x;
        cin>>n>>k>>x;
        vector<vector<long long int>>arr;
        vector<long long int> v(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        v.push_back(99999999999);
        sort(v.begin(),v.end());
        vector<long long int> ch;
        for(long long int i=0;i<n;i++)
        {
            ch.push_back(v[i]);
            if(abs(v[i+1]-v[i])>x)
            {
                arr.push_back(ch);
                ch.clear();
            }
            
        }
        long long int ans=arr.size();
        for(int i=0;i<arr.size()-1;i++)
        {
            if(k==0)
            {
                break;
            }
            long long int m=arr[i][arr[i].size()-1];
            long long int n=arr[i+1][0];
            long long int bb=(m+n)/2;
            bool check=abs(bb-m)<=x && abs(bb-n)<=x;
            if(check==true)
            {
                ans--;
                k--;
            }
            

        }
        cout<<ans<<endl;

   
return 0;
}