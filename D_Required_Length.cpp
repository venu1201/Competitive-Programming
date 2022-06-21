#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

unordered_map<unsigned long long,unsigned long long> m;

unsigned long long check(unsigned long long n,unsigned long long x)
{

    string s = to_string(x);
    

    unsigned int aa = s.size();
    if (aa >= n )
        return 0;
    if (m[x] != 0)
        return m[x];
    unsigned long long y = x;
    unordered_set<unsigned long long> st;
    while (y > 0)
    {
        st.insert(y%10);
        
        y = y / 10;
    }
    unsigned long long sum = INT_MAX;

    for (auto p : st)
    {
        if (p == 1 || p == 0)
            continue;
        
        sum=min(sum,check(n,x*p)+1);
        
        
    }
    m[x]=sum;
    return m[x];
}

int main()
{

    unsigned long long t = 0;

    unsigned long long n, i, a{}, b{},  d{}, x = 0, sum{}, j = 0;
    unsigned long long mod = 1e9 + 7, z;

    cin >> n >> x;
    unsigned long long k = check(n, x);

    if (k == INT_MAX)
        cout << -1 << endl;
    else
        cout << k  << endl;

    return 0;
}