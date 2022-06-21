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
        vector<vector<int>>arr;
        int m=-1;
        vector<int> t;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(i==0)
            {
                t.push_back(x);
                m=x;
            }
            else
            {
                if(x<m)
                {
                    t.push_back(x);
                }
                else
                {
                    arr.push_back(t);
                    t.clear();
                    t.push_back(x);
                    m=x;
                }
            }
            if(i==n-1)
            {
                arr.push_back(t);
            }
        } 
        for(int i=arr.size()-1;i>=0;i--)
        {
            for(int j=0;j<arr[i].size();j++)
            {
                cout<<arr[i][j]<<" ";
            }
        }cout<<endl;
    }
return 0;
}