#include<bits/stdc++.h>
using namespace std;
bool comp(pair<long long int,long long int> a,pair<long long int,long long int> b)
{
    return a.second<b.second;
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    long long int T;
    cin>>T;
    while(T--)
    {
        long long int n;
        cin>>n;
        vector<pair<long long int,long long int>> arr(n);
        long long int y=0;
        vector<long long int> time;
        for(auto &x:arr)
        {
            cin>>x.first;
            time.push_back(x.first);
            x.second=y;
            y++;   
        }
        vector<long long int> ans;
        ans.push_back(0);
        sort(arr.begin(),arr.end());
        long long int check=1;
        long long int ll=1,rr=-1;
        for(long long int i=arr.size()-1;i>=0;i--)
        {
            if(check==1)
            {
                arr[i].first=ll;
                check=2;
                ll++;
                continue;
            }
            if(check==2)
            {
                arr[i].first=rr;
                rr--;
                check=1;
                continue;
            }
        }
        sort(arr.begin(),arr.end(),comp);
        for(auto it:arr)
        {
            ans.push_back(it.first);
        }
        long long int sum=0;
        for(long long int i=1;i<ans.size();i++)
        {
            sum+=2*(abs(ans[0]-ans[i]))*time[i-1];
        }
        cout<<sum<<endl;
        for(auto it:ans)
        {
            cout<<it<<" ";
        }cout<<endl;

        
    }
return 0;
}