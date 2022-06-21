#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
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
        int n,q;
        cin>>n>>q;
        string a,b;
        cin>>a>>b ;
        vector<char> arr;
        int x=97;
        for(int i=0;i<52;i++)
        {
            arr.push_back(x);
            x++;
           
            if(x==97+26)
            {
                x=97;
            }
        }
        int cnt=0;
        vector<int> ans={0};
        
        for(int i=0;i<n;i++)
        {
            cnt=0;
            cnt=(b[i]-a[i]+26)%26;
            if(i%2)
            ans.push_back(cnt+ans[i]);
            else
            ans.push_back(ans[i]-cnt);

        }
       
        
        
        while(q--)
        {
            int x,y;
            cin>>x>>y;
           
	        if((ans[y]-ans[x-1]+26)%26)
	        no
	        else
	        yes
	        
        }
    }
return 0;
}