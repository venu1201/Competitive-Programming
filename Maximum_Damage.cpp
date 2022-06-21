#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        long long int n, i, k = 999999, x = 0, j = 0, y = 0;

        cin >> n;
        vector<long long int> v(n);

        for (i = 0; i < n; i++)
        {

            cin >> v[i];
        }

        if (n == 2)
        {
            i = 0;
            long long p = v[i] & v[i + 1];
            cout << p << " " << p << endl;
            continue;
        }
        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                long long p = v[i] & v[i + 1];
                cout << p << " ";
            }
            else
            {
                if (i != n - 1)
                {
                    long long p = max(v[i] & v[i + 1], v[i - 1] & v[i]);
                    cout << p << " ";
                }
                else
                {

                    long long p = v[i - 1] & v[i];
                    cout << p << " ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}