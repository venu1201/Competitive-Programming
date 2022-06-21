#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long int n,k;
        cin>>n>>k;
        long long int a[n];
        long long int m=INT_MIN;
        for(long long int i=0;i<n;i++){
            cin>>a[i];
            m=max(m,a[i]);
        }
       
        long long int j=k-1;
        long long int res=0;
        for(long long int i=j;i<n;i++){
            if(a[i]==m)
             res+=(n-i);
        }
        cout<<res<<endl;
    }
    return 0;
}