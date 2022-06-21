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
        vector<pair<int,string>> arr;
        map<char,int> mp;
        vector<char> x={'a','b','c','d','e'};
        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            arr.push_back(make_pair(0,str));
            for(auto x:arr[i].second)
            {
                 
                mp[x]++;
            }         
        }
        char ch;
        int m=0;
        for(auto it:mp)
        {
            if(m<it.second)
            {
                m=it.second;
                ch=it.first;
            }
        }
        map<string,int> ans;
        for(int i=0;i<n;i++)
        {
            map<char,int> mp2;
            for(auto x:arr[i].second)
            {
                mp2[x]++;
            } 
            ans[arr[i].second]=mp2[ch];
            arr[i].first=((double)mp2[ch]/(double)arr[i].second.size())*100;   
              
        }
        int l=arr.size()-1;
        int cnt=0,c1=0,c2=0;
        sort(arr.begin(),arr.end());
        while(l>=0)
        {
            c1+=ans[arr[l].second];
            c2+=arr[l].second.size()-ans[arr[l].second];
            cout<<c1<<" "<<c2<<endl;
            if(c1>=c2)
            {
                cnt++;
            }
            else
            {
                break;
            }
            l--;
        }
        cout<<cnt<<endl;
        
    }
return 0;
}