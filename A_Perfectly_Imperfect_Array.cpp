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
    vector<int> check;
    for(int i=0;i<=110;i++)
    {
        check.push_back(i*i);
    }
    while(T--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int c=0;
        for(auto x:arr)
        {
             auto it=find(check.begin(),check.end(),x);
            if(it==check.end())
            {
                c=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(c==0)
        {
            cout<<"NO"<<endl;
        }

    }
return 0;
}