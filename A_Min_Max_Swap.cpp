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
        vector<int> a(n);
        vector<int> b(n);

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(b[i]>a[i])
            {
                int t=a[i];
                a[i]=b[i];
                b[i]=t;
            }
        }
        
       int x=*max_element(a.begin(),a.end());
       int y=*max_element(b.begin(),b.end());
        cout<<x*y<<endl;
        
        
    }
return 0;
}