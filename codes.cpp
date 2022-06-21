#include<bits/stdc++.h>
using namespace std;

int Max=1000000;
bool prime[1000000]={true};
long long mod=10e+7;
vector<set<int>> g(Max);
void buildsieve()
{
    prime[0]=false;
    prime[1]=false;
    for(int p=2;p*p<=Max;p++)
    {
        if(prime[p])
        {
            for(int i=p*p;i<=Max;i+=p)
            {
                prime[i]=false;
            }
        }
    }
}
void generateadjtreeset(vector<int> arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        int no=arr[i];
        if(no==1)
        {
            g[1].insert(1);
            continue;
        }
        int value=(int)sqrt(no);
        for(int j=1;j<=value;j++)
        {
            if(no%j==0)
            {
                if(j!=(no/j))
                {
                    if(prime[j]&& j!=1)
                    {
                        g[no].insert(j);
                        g[j].insert(no);
                    }
                }
                if(prime[no/j]&&(no/j)!=1)
                {
                    g[no].insert(no/j);
                    g[no/j].insert(no);
                }
            }
            else
            {
                if(prime[j]&& j!=1)
                {
                    g[no].insert(j);
                    g[j].insert(no);
                }
            }
        }


    }
}
long long int power(long x,long y)
{
    long res=1;
    while(y>0)
    {
        if((y&1)==1)
        {
            res=(res*x)%mod;
        }
        x=(x*x)%mod;
        y=y>>1;
    }
    return res;
}
void bfs(vector<set<int>> g[],int u,bool visited[])
{
    queue<int> q;
    q.push(u);
    visited[u]=true;
    while(q.empty()!=true)
    {
        int top=q.front();
        q.pop();
        for(int v:g[top])
        {
            if(visited[v]==false)
            {
                q.push(v);
                visited[v]=true; 

            }
        }
    }
}
void countstablepartitions(int n,vector<int> values)
{

    generateadjtreeset(values,n);
    int count=0;
    bool visited[Max];
    for(int i=0;i<n;i++)
    {
        if(visited[values[i]]==false)
        {
            count++;
            bfs(g,values[i],visited);
        }
    }
    long ans=power(2,count)-2;
    if(ans==0)
    {
        cout<<"No"<<endl;
        cout<<ans<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
        cout<<ans<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> values(n);
    for(int i=0;i<n;i++)
    {
        cin>>values[i];
    }
    countstablepartitions(n,values);
    return 0;
}