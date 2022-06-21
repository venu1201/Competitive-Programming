#include <bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
       

        if (k > ((n + 1) / 2))
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n; j++)
            {

                if (i % 2 == 0 && i == j && k > 0)
                {

                    cout << "R";
                    k--;
                }
                else
                    cout << ".";
            }

            cout << endl;
        }
    }
    return 0;
}