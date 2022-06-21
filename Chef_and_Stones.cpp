#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].first;
        }
        long long int max=-999999999999;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i].second;     
        }
        int res;
        for(int i=0;i<n;i++)
        {
            res=(k/arr[i].first)*arr[i].second;
            if(res>max)
            {
                max=res;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}