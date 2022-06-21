#include "bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

template<class T> using pq = priority_queue<T>;
template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>;
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifdef DEBUG
#define dbg(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#endif


const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; 

ll solve(ll N,vector<ll> A,vector<ll> B) {
    
    ll cost[16]; F0R(i, 16) cost[i] = 1e12;
    F0R(i, N) {
        ckmin(cost[1], abs(A[0] - B[i]));
        ckmin(cost[2], abs(A[N-1] - B[i]));
        ckmin(cost[4], abs(A[i] - B[0]));
        ckmin(cost[8], abs(A[i] - B[N-1]));
    }
    cost[5] = abs(A[0] - B[0]);
    cost[9] = abs(A[0] - B[N-1]);
    cost[6] = abs(A[N-1] - B[0]);
    cost[10] = abs(A[N-1] - B[N-1]);
    ll ans[16]; F0R(i, 16) ans[i] = 1e12;
    ans[0] = 0;
    F0R(i, 16) {
        F0R(j, 16) {
            ckmin(ans[i|j], ans[i] + cost[j]);
        }
    }
    return ans[15];
}
ll fun(ll n,vector<ll> a,vector<ll> b)
{
ll m1=abs(a[0]-b[0]),m2=abs(a[n-1]-b[n-1]),n1=abs(a[0]-b[0]),n2=abs(a[n-1]-b[n-1]);
for(int i=0;i<n;i++){
    if(m1>abs(a[0]-b[i])){
        m1=abs(a[0]-b[i]);
    }
    if(m2>abs(a[n-1]-b[i])){
        m2=abs(a[n-1]-b[i]);
    }
    if(n1>abs(a[i]-b[0])){
        n1=abs(a[i]-b[0]);
    }
    if(n2>abs(a[i]-b[n-1])){
        n2=abs(a[i]-b[n-1]);
    }
}
ll d=min( abs(a[0]-b[0])+m2+n2,abs(a[n-1]-b[n-1])+m1+n1);
ll v=min(abs(a[0]-b[n-1])+m2+n1,abs(a[n-1]-b[0])+m1+n2);
v=min(d,v);
ll sum=m1+m2+n1+n2;
ll h=min(abs(a[0]-b[0])+abs(a[n-1]-b[n-1]),abs(a[0]-b[n-1])+abs(a[n-1]-b[0]));
ll g=min(h,sum);
g=min(g,v);

return g;

}
int main() {
    cin.tie(0)->sync_with_stdio(0); 
    cin.exceptions(cin.failbit);

    int T = 100;
    while(T--) {
        ll mod=1e5,m=1e9+1;
        mod=2*mod +1;
        ll n=rand()%mod;
        if(n<3)
        n=3;
        vector<ll> a,b;
        for(int i=0;i<n;i++)
        {
            ll x=rand()%m;
            a.push_back(x);
            
        }
        for(int i=0;i<n;i++)
        {
            ll x=rand()%m;
            b.push_back(x);
        }
        if(solve(n,a,b)!=fun(n,a,b))
            cout<<"Hey"<<endl;
    }

	return 0;
}


