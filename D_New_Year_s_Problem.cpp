#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int i, j, k, l, ans = 0, count = 0, n, m, x, y, r;
        long long int maxa = -1e18, mina = 1e18;
        bool flag = 0;
        string s;
        map<long long int, long long int> mp1;
        cin >> m >> n;
        long long int mat[m + 1][n + 1];
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> mat[i][j];
            }
        }
        vector<long long int> vectf, vects;
        vector<pair<long long int, long long int>> vect, vectn;
        for (i = 0; i < n; i++)
        {
            maxa = -1;
            long long int maxs = -1;
            for (j = 0; j < m; j++)
            {
                if (mat[j][i] >= maxa)
                {
                    maxs = maxa;
                    maxa = max(maxa, mat[j][i]);
                }
                vect.push_back({mat[j][i], i});
            }
            vectf.push_back(maxa);
        }
        sort(vectf.begin(), vectf.end());
        reverse(vectf.begin(), vectf.end());
        sort(vect.begin(), vect.end());
        reverse(vect.begin(), vect.end());
        if (m >= n)
        {
            for (i = 0; i < n; i++)
            {
                maxa = -1;
                for (j = 0; j < m; j++)
                {
                    if (maxa < mat[j][i])
                    {
                        maxa = mat[j][i];
                        x = j;
                    }
                }
                vectn.push_back({maxa, x});
            }
            for (i = 0; i < vectn.size(); i++)
            {
                mp1[vectn[i].second]++;
            }
            for (auto it : mp1)
                if (it.second > 1)
                    flag = 1;
            if (flag)
                cout << vectf[n - 1] << "\n";
            else
            {
                for (i = 0; i < m; i++)
                {
                    sort(mat[i], mat[i] + n);
                    reverse(mat[i], mat[i] + n);
                    vects.push_back(mat[i][1]);
                }
               
                sort(vects.begin(), vects.end());
                reverse(vects.begin(), vects.end());
                
                cout << min(vectf[n - 1], vects[0]) << "\n";
            }
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                maxa = -1;
                for (j = 0; j < m; j++)
                {
                    maxa = max(mat[j][i], maxa);
                }
                mina = min(maxa, mina);
            }
            cout << mina << "\n";
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}