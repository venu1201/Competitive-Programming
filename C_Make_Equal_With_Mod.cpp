#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define debug1dv(arr){ for(auto it:arr) cout<<it<<" "; cout<<endl;}
#define debug2dv(arr){for(auto it:arr){for(auto x:it)cout<<x<<" "; cout<<endl;}}
#define debugmap(mp){for(auto it:mp) cout<<it.first<<"->"<<it.second<<endl;}
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
        unordered_set<int> st;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);
        }
        if(st.size()==1)
            yes
        else
        {
            int x=count(arr.begin(),arr.end(),1);
            if(x==0)
                yes
            else
            {
                sort(arr.begin(),arr.end());
                int ch=0;
                for(int i=0;i<arr.size()-1;i++)
                {
                    if(arr[i]==arr[i+1]-1)
                    {
                        ch=1;
                    }
                }
                if(ch==1)
                    no
                else
                yes
            }
        }
    }
return 0;
}