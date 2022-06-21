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
        vector<int> arr(n);
        set<int> st;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            st.insert(arr[i]);
        }
        if(st.size()>k)
        {
            cout<<-1<<endl;
            continue;
        }
        
            for(int i=1;i<=n;i++)
            {
                if(st.size()==k)
                {
                    break;
                }
                st.insert(i);
                
            }
        
        vector<int> rep,ch;
        for(auto it:st)
        {
            rep.push_back(it);
        }
        ch=rep;
        while(rep.size()<1e4+10)
        {
            for(auto it:ch)
            {
                rep.push_back(it);
            }
        }
        int x=0,y=0,c=0,ans=0;
        while(x<n)
        {
            if(arr[x]==rep[y])
            {
                x++;
                if(c==0)
                {
                    ans=y;
                    c=1;
                }
                y++;
            }
            else
            {
                y++;
            }
        }
        cout<<y-ans+1<<endl;
        for(int i=ans;i<=y;i++)
        {
            cout<<rep[i]<<" ";
        }cout<<endl;
    }
return 0;
}