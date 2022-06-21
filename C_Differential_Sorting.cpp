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
        int n;
        cin>>n;
        vector<int> arr(n),a;
        map<int,queue<int>> mp;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]].push(i);
        }
        a=arr;
        sort(a.begin(),a.end());
        int l=0,r=n-1;
        int cnt=0;
        vector<vector<int>> ans;
        int check=0;
        for(int i=0;i<n-2;i++)
        {
            if(a[l]==arr[i])
            {
                l++;
            }
            if(a[r]==arr[i])
            {
                r--;
            }
            if(arr[i]>a[l]-a[r])
            {
                arr[i]=a[l]-a[r];
                cnt++;
                while(mp[a[l]].empty()==false &&i+1>=mp[a[l]].front()+1)
                {
                    mp[a[l]].pop();
                }
                while(mp[a[r]].empty()==false &&i+1>=mp[a[r]].front()+1)
                {
                    mp[a[r]].pop();
                }
                if(i+1<mp[a[l]].front()+1  &&  mp[a[l]].front()+1 <  mp[a[r]].front()+1  && i+1< mp[a[r]].front()+1 )
                ans.push_back({i+1,mp[a[l]].front()+1,mp[a[r]].front()+1});
                else
                {
                    check=1;

                }
                
            }
            arr[i]=min(a[l]-a[r],arr[i]);
        }
        if(is_sorted(arr.begin(),arr.end()) && check==0)
        {
            cout<<cnt<<endl;
        for(auto it:ans)
        {
            for(auto x:it)
            {
                cout<<x<<" ";
            }cout<<endl;
        }

        }
        else
        {
            cout<<-1<<endl;
        }
    }
return 0;
}