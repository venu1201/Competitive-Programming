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
        vector<int> arr(n);
        int o=0,e=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==1)
            {
                o++;
            }
            else
            {
                e++;
            }
        }
        sort(arr.begin(),arr.end());
        if(n==2)
        {
            if(arr[0]%2==arr[1]%2 || abs(arr[0]-arr[1])==1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            continue;
        }
        int cnt=0,ch=1;
        for(int i=0;i<n-1;i++)
        {
           if(abs(arr[i]-arr[i+1])==1)
           {
               cnt++;
           }

        }
        cout<<cnt<<endl;
    }
return 0;
}