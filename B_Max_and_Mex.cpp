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
        if(k==0)
        {
            cout<<st.size()<<endl;
            continue;
        }
        int i=0,c=0;
        for(auto it:st)
        {
            if(it!=i)
            {
                c=1;
                break;
            }
            i++;
        }
        if(c==1)
        {
        st.insert(ceil(((float)*max_element(arr.begin(),arr.end())+float(i))/2.0));
        cout<<st.size()<<endl;
        }
        else
        {
            cout<<st.size()+k<<endl;
        }
        
    }
return 0;
}