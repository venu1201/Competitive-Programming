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
        int n,k;
        cin>>n>>k;
        set<int> st;
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
        for(auto it:st)
        {
            if(it%k==0)
            {
                arr.push_back(make_pair(it,(it/k)));
            }
            else
            {
                arr.push_back(make_pair(it,(it/k)+1));
            }

        }
        int y=arr.size()-1,l=0,ans=0;
        while(1)
        {
            int max=arr[y].second;
            int min=arr[l].second;
            if(min==max)
            {
                ans++;
                break;
            }
            if(min>max)
            {
                break;
            }
            y--;
            ans++;
            if(arr[0].second<=ans)
            {
                l++;
            }
        }
        cout<<ans<<endl;

        

    }
return 0;
}