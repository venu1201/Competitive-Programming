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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x=n-1;
        int cnt=0;
        int y=0;
        while(x>-1)
        {
            if(arr[x]==arr[n-1])
            {
                y++;
                x--;
            }
            else
            {
                x-=y;
                y+=y;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
return 0;
}