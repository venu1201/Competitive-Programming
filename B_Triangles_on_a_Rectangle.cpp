#include<bits/stdc++.h>
using namespace std;
double fun(pair<long long int,long long int> a,pair<long long int,long long int> b,pair<long long int,long long int> c)
{
    double x=a.first*(b.second-c.second);
    double y=b.first*(c.second-a.second);
    double z=c.first*(a.second-b.second);
    double ans=abs(x+y+z);
    return ans;

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
        long long int w,h;
        cin>>w>>h;
        long long int k;
        cin>>k;
        vector<pair<long long int,long long int>> arr;
        for(long long int i=0;i<k;i++)
        {
            long long int x;
            cin>>x;
            arr.push_back(make_pair(x,0));
        }
        cin>>k;
        vector<pair<long long int,long long int>> a2;
        for(long long int i=0;i<k;i++)
        {
            long long int x;
            cin>>x;
            arr.push_back(make_pair(x,h));
        }
        cin>>k;
        vector<pair<long long int,long long int>> a3;
        for(long long int i=0;i<k;i++)
        {
            long long int x;
            cin>>x;
            arr.push_back(make_pair(0,x));
        }
        cin>>k;
        vector<pair<long long int,long long int>> a4;
        for(long long int i=0;i<k;i++)
        {
            long long int x;
            cin>>x;
            arr.push_back(make_pair(w,x));
        }
        sort(arr.begin(),arr.end());
        double sum=-9999999;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if(j==i)
                {
                    continue;
                }
                for(int kk=0;kk<arr.size();kk++)
                {
                    if(j==kk)
                    {
                        continue;
                    }
                    sum=max(sum,fun(arr[i],arr[j],arr[kk]));
                }
            }
        }           
            cout<<sum<<endl;
        
       


    }
return 0;
}