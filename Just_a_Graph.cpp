#include<bits/stdc++.h> 
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        long long int ans=0;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]-i-1]++;
            if(mp[a[i]-i-1]==1)
            {
                ans++;
            }
        }
        if(mp[a[0]-1]==n)
        {
            cout<<n<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}