#include<bits/stdc++.h>
#define int long long int
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define endl "\n"
#define debug1dv(arr){ for(auto it:arr) cout<<it<<" "; cout<<endl;}
#define debug2dv(arr){for(auto it:arr){for(auto x:it)cout<<x<<" "; cout<<endl;}}
#define debugmap(mp){for(auto it:mp) cout<<it.first<<"->"<<it.second<<endl;}
using namespace std;
void dfs(int v,vector<int>&vis,vector<int> g[],string &ans,string &str)
{
    vis[v]=1;
    ans+=str[v];
    for(int child:g[v])
    {
        if(vis[child]==-1)
        {   
            dfs(child,vis,g,ans,str);
        }
    }
}
int gcd( int a,  int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int findPeriod(string A)
{
	int length = A.size();

	
	int period = -1;

	
	int i = 0;
    int j=1;
	for (j = 1; j < length; j++) {
		int currChar = A[j];
		int comparator = A[i];

		if (currChar == comparator) {
			period = (j - i);
			i++;
		}

		
		else {
			if (currChar == A[0]) {
				i = 1;
				period = j;
			}
			else {
				i = 0;
				period = -1;
			}
		}
	}
   
	

	period = (length % period != 0) ? A.size() : j-i;
	return period;
}
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
        vector<int> arr(n);
        string str;
        cin>>str;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        vector<int> g[n];
        for(int i=0;i<n;i++)
        {
            g[i].push_back(arr[i]-1);
        }
        vector<int> vis(n,-1);
        vector<int> a;
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==-1)
            {
                string ans="";
                dfs(i,vis,g,ans,str);
                a.push_back(findPeriod(ans)); 
            }
        }
        
        if(a.size()==1)
        {
            cout<<a[0]<<endl;
        }
        else
        {
            int check=lcm(a[0],a[1]);
            
            for(int i=2;i<a.size();i++)
            {
                check=lcm(check,a[i]);
            }
            cout<<check<<endl;
        }
        
    }
return 0;
}