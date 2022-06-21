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
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int cnt = 0;
        x--;
        y--;
        vector<vector<char>> arr;
        for (int i = 0; i < n; i++)
        {
            vector<char> t;
            for (int j = 0; j < m; j++)
            {
                char x;
                cin >> x;
                if (x == 'B')
                {
                    cnt = 1;
                }
                t.push_back(x);
            }
            arr.push_back(t);
        }
        if (cnt == 0)
        {
            cout << -1 << endl;
        }
        else if (arr[x][y] == 'B')
        {
            cout << 0 << endl;
        }
        else
        {
            cnt = 0;
            for (int i = 0; i < m; i++)
            {
                if (arr[x][i] == 'B')
                {
                    cnt = 1;
                    break;
                }
            }
            if (cnt == 1)
            {
                cout << 1 << endl;
                continue;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (arr[i][y] == 'B')
                    {
                        cnt = 1;
                        break;
                    }
                }
            }
            if(cnt==1)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
    }
    return 0;
}