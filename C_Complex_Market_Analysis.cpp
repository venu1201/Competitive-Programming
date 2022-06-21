#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define prtarr(arr) for(auto it:arr){for(auto x:it){cout<<x<<' ';}cout<<endl;}
using namespace std;
void fun(vector<bool>&prime)
{
    
 
    for (int p = 2; p * p <= 10000000; p++)
    {
       
        if (prime[p] == true)
        {
            for (int i = p * p; i <= 10000000; i += p)
                prime[i] = false;
        }
    }
}
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int T;
    cin>>T;
    vector<bool>prime(10000000,true);
    fun(prime);
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(m);
        vector<int> arr(n);
        vector<int> t;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            a[i%m].push_back(arr[i]);
        }
        int cnt=0,cnt2=0;
        prime[1]=false;
        prime[0]=false;
        for(int i=0;i<a.size();i++)
        {
            int sum=1;
            int f=1;
            for(int j=0;j<a[i].size() && a[i].size()>=2;j++)
            {
                sum=sum*a[i][j];
                if(j==0) continue;
                if(prime[sum]==true)
                {
                    
                    f=0;
                    cnt++;
                }
                else if(a[i][j]==1) continue;
                else
                {
                    break;
                }
            }
            if(f==0)
                cnt2++;
        }
        cout<<cnt<<endl;
    }
return 0;
}