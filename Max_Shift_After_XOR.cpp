#include<bits/stdc++.h>
#include <climits>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define debug1dv(arr){ for(auto it:arr) cout<<it<<" "; cout<<endl;}
#define debug2dv(arr){for(auto it:arr){for(auto x:it)cout<<x<<" "; cout<<endl;}}
#define debugmap(mp){for(auto it:mp) cout<<it.first<<"->"<<it.second<<endl;}
using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    unsigned long long int T;
    cin>>T;
    while(T--)
    {
        unsigned long long int n;
        cin>>n;
        
        vector<unsigned long long int> arr(n);
        for(unsigned long long int i=0;i<n;i++)
        {
            cin>>arr[i];
           
        }
        
        unsigned long long int ans=0;
        for(unsigned long long int i=0;i<n;i++)
        {
            unordered_set<unsigned long long int> st;
            unsigned long long int x=0;
            for(unsigned long long int j=0;j<n;j++)
            {
                x=x^arr[j];
                cout<<x<<" ";
                st.insert(x);
            }cout<<endl;
            
            debug1dv(arr)
            cout<<st.size()<<endl;
            cout<<x<<endl;
            if(ans<st.size())
            {
                ans=st.size();
            }
            
            unsigned long long int pre=arr[0];
            for(unsigned long long int i=1;i<n;i++)
            {
                unsigned long long int cur=arr[i];
                arr[i]=pre;
                pre=cur; 
            }
            
            arr[0]=pre;
            
           

        }
        cout<<ans<<endl;
    }
return 0;
}