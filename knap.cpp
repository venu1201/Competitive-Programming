#include<bits/stdc++.h>
using namespace std;
const int N=1e5+2;
int val[N],wt[N];
int knap(int n,int w)
{
    cout<<n<<" "<<w<<endl;
    if(n<=0 || w<=0)
    {
        cout<<"huu "<<n<<" "<<w<<endl;
        return 0;
    }
    if(wt[n-1]>w)
    {
        cout<<"kki "<<n<<" "<<w<<endl;
        return knap(n-1,w);
    }
    int m=max(knap(n-1,w-wt[n-1])+val[n-1],knap(n-1,w));
    cout<<"h "<<m<<endl;
    return m;
}
signed main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>wt[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    int w;
    cin>>w;
    cout<<knap(n,w);

    
    return 0;
}