#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vvi vector<vector<int>>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define res(i,b,a) for(int i=b-1; i>=0; i--)
#define vb vector<bool>
#define vpi vector<pair<int, int>>
#define ff first
#define ss second
#define ll long long
#define vll vector<long long>
#define vvll vector<vector<long long>>
#define ull unsigned long long
#define vull vector<unsigned long long>
#define vvull vector<vector<unsigned long long>>
#define lli long long int
#define vli vector<long long int>
#define vvlli vector<vector<long long int>>
#define ulli unsigned long long int
#define vulli vector<unsigned long long int>
#define vvulli vector<vector<unsigned long long int>>
#define vlli vector<long long int>
#define MOD 1000000009
#define mod 1000000007

//vvll dp(5002, vll (5002, -1));

ll sumof(vll &A, ll a, ll b)
{
    ll sum = 0;
    rep(i,a,b+1)
    {
        sum += A[i];
    }
    return sum;
}

ll print(ll K, ll X, vll &A, ll i, ll j)
{
    //if(K==0)
    //return sumof(A, i, j);
    
    if(i==j)
    return A[i];
    
    if(i>j)
    return 0;
    
    //if(dp[i][j] != -1)
    //return dp[i][j];
    
    ll l = A[i] + print(K, X, A, i+1, j);
    ll m = A[j] + print(K, X, A, i, j-1);
    ll k = LLONG_MAX;
    if(K>0)
    k = X + print(K-1, X, A, i+1, j-1);
    //dp[i][j] = min({l, m, k});
    return min({l, m, k}); //dp[i][j];
}

signed main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll N, K, X;
        cin >> N >> K >> X;
        vll A(N);
        rep(i,0,N)
        cin >> A[i];
        
        //memset(dp, -1, sizeof(dp));
        cout << print(K, X, A, 0, N-1) << "\n";
        
    }
    
    return 0;
}