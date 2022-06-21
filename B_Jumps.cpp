#include<bits/stdc++.h>
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    vector<long long int> arr,a;
    long long int l=0,k=1;
    while(l<1e6+1)
    {
        
        arr.push_back(l);
        l=l+k;
        k++;   
    }
   
    
    while(T--)
    {
        long long int n,ch=1;
        cin>>n;
        auto it=lower_bound(arr.begin(),arr.end(),n);
        long long int x=it-arr.begin();
        long long int a=arr[x]-n;
        if(a==1)
        {
            cout<<x+1<<endl;
        }
        else
        {
            cout<<x<<endl;
        }



    }
return 0;
}