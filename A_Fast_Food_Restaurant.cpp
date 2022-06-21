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
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> arr={a,b,c};
        sort(arr.begin(),arr.end());
        a=arr[0];
        b=arr[1];
        c=arr[2];
        int cnt=0;
        if(a>0)
        {
            cnt++;
            a--;
        }
        if(b>0)
        {
            cnt++;
            b--;
        }
        if(c>0)
        {
            cnt++;
            c--;
        }
        if(b>0 && c>0)
        {
            cnt++;
            b--;
            c--;
        }
        if(a>0 && c>0)
        {
            cnt++;
            a--;
            c--;
        }
        if(b>0 && a>0)
        {
            cnt++;
            b--;
            a--;
        }
        if(a>0 && b>0 && c>0)
        {
            cnt++;
            a--;
            b--;
            c--;
        }
        cout<<cnt<<endl;
    }
return 0;
}