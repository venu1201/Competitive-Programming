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
        int n,m,c=0;
        cin>>n>>m;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
            
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i]%m;
        }
        set<int> st;
        for(auto it:arr)
        {
            st.insert(it);
        }
        if(st.size()==1)
        {
            cout<<1<<endl;
        }
        else if(st.size()>1)
        {
            int ch=0;
            for(auto it:st)
            {
                if(it==0)
                {
                    ch=1;
                    break;
                }
                else
                {
                    break;
                }
            }
            if(ch==1)
            {
                cout<<st.size()-1<<endl;
            }
            else
            {
                cout<<st.size()<<endl;
            }
        }

        

    }
return 0;
}