#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<9<<endl;
            continue;
        }
        vector<int> arr(n);
        arr[1]=8;
        arr[0]=9;
        int x=9;
        for(int i=2;i<n;i++)
        {
            arr[i]=x;
            x++;
            if(x==10)
            {
                x=0;
            }
        }
        for(auto it:arr)
        {
            cout<<it;
        }cout<<endl;
    }
return 0;
}