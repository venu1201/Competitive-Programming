#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, long long> m;

long long check(int n, int x)
{

    string s = to_string(x);
    unordered_set<long long> a;

    int aa = s.size();
    if (aa >= n )
        return 0;
    if (m[x] != 0)
        return m[x];
    long long y = x;

    while (y > 0)
    {

        a.insert(y % 10);
        y = y / 10;
    }

    long long sum = INT_MAX;

    for (auto p : a)
    {
        if (p == 1 || p == 0)
            continue;
        ;
        long long v = check(n, x * p);
        sum = min(sum, v);
    }

    return m[x] = sum;
}

int main()
{

    long long t = 0;

    long long int n, i, a{}, b{}, c{-999999}, d{}, x = 0, sum{}, j = 0;
    long long int mod = 1e9 + 7, z;

    cin >> n >> x;
    long long k = check(n, x);

    if (k >= INT_MAX)
        cout << -1 << endl;
    else
        cout << k - 1 << endl;

    return 0;
}