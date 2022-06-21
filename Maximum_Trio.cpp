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
        set<long long int> st;
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);
        }
        sort(arr.begin(),arr.end());
        if(st.size()==1)
        {
            cout<<0<<endl;
        }
        else 
        {
            cout<<(arr[n-1]-arr[0])*arr[n-2]<<endl;
        }
        
    }
return 0;
}