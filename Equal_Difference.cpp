#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int high=0;
        map<long long ,int> m;
        for(int i=0;i<n;i++){
            long long  x;
            cin>>x;
            m[x]++;
            high=max(high,m[x]);
        }
        
        int ans=0;
        if(n>2)
        {
            ans=n-high;
        }
        cout<<ans<<endl;
    }
    return 0;
}