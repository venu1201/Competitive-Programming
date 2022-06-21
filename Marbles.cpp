#include <bits/stdc++.h>

using namespace std;

long long int fun(char u, string s, string t,set<char> p)
{
    long long i = 0, n = s.size(), cnt = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '?')
            s[i] = u;
        if (t[i] == '?')
            t[i] = u;
    }

    for (i = 0; i < n; i++)
    {
        if (s[i] == t[i])
            continue;

        if (p.count(s[i]) == p.count(t[i]))
        {
            cnt += 1;
        }
        else
            cnt += 2;
    }

    return cnt;
}

int main()
{

    long long int T;
    cin >> T;
    while (T--)
    {

        long long int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        map<char, long long> mp;
        set<char> s;
        s.insert('a');
        s.insert('e');
        s.insert('i');
        s.insert('o');
        s.insert('u');
        long long int m = LLONG_MAX;
        for (char i = 'a'; i <= 'z'; i++)
        {

            m = min(fun(i, a, b,s), m);
        }

        cout << m << endl;
    }

    return 0;
}