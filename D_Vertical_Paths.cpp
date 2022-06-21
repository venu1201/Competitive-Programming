/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll ;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// some extra
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} cout<<endl;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())
// function
ll power(ll x,ll y,ll mod)
{
    ll res=1;
    // x=x%mod;
    while(y>0){
        if(y%2==1){
            res*=x;
            // res=res%mod;
        }
        y/=2; x*=x; // x=x%mod;
    }
    return res;
}
ll str_to_num(string s){
    return stoi(s);
}
string num_to_str(ll num){
    return to_string(num);
}
/* ascii value 
    A=65,Z=90,a=97,z=122
*/
/* Some syntax 
    //Syntax to create a min heap for priority queue
    //priority_queue <int, vector<int>, greater<int>>pq;
*/
/*  --------------------MAIN PROGRAM----------------------------*/
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph


// Experience :
// Cp is nothing but only observation and mathematics.
vector<vector<ll>> adj;
vector<vector<ll>> ans;
vector<bool>check;
vl parent;

void dfs(ll root,vector<ll>& temp_ans,queue<ll>& q){
    if(check[root]==true){
        return ;
    }
    check[root]=true;
    temp_ans.pb(root);
    ll temp_flag=0;
    for(ll i=0;i<sz(adj[root]);i++){
        if(check[adj[root][i]]==false){
            q.push(adj[root][i]);
            if(temp_flag==0){
                temp_flag=1;
                dfs(adj[root][i],temp_ans,q);
            }
        }
    }
    return ;
}

ll solve(){
    ll n;
    cin>>n;
    adj.resize(n+1);
    // map<ll,ll> degree;
    ll root=0;
    check.resize(n+1,false);
    parent.resize(n+1);
    for(ll i=0;i<n;i++){
        cin>>parent[i+1];
        if(parent[i+1]!=i+1){
            adj[parent[i+1]].pb(i+1);
            adj[i+1].pb(parent[i+1]);
            
        }
        else{
            root=i+1;
        }
    }
    queue<ll> q;
    q.push(root);
    while(q.size()){
        vl temp_ans;
        ll temp_root=q.front();
        q.pop();
        dfs(temp_root,temp_ans,q);
        queue<ll> x=q;
        cout<<"hey ";
        while(x.size()!=0)
        {
            int y=x.front();
            x.pop();
            cout<<y<<" ";
        }cout<<endl;
        cout<<"ans ";
        for(auto it:temp_ans)
        {
            cout<<it<<" ";
        }cout<<endl;
        if(sz(temp_ans)){
            ans.pb(temp_ans);
        }
    }
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<sz(x)<<endl;
        printv(x);
    }
    adj.clear();
    check.clear();
    ans.clear();
    return 0;
}
int main(){
    speed;
    /*
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 
    */
    ll TestCase=1;
    cin>>TestCase;
    while(TestCase--){
        solve();
    }
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission 
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/