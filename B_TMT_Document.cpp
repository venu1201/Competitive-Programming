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
        int n;
        cin >> n;
        string str;
        cin >> str;
        int t = 0, m = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'T')
            {
                t++;
            }
            else
            {
                m++;
            }
        }
        if (2 * m == t)
        {
            int check = 0;
            int x = 0, y = 0;
            for (int i = 0; i < n; i++)
            {
                if (str[i] == 'T')
                {
                    x++;
                }
                else
                {
                    y++;
                }
                if (y > x)
                {
                    check = 1;
                    break;
                }
            }
            if (check == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                x = 0;
                y = 0;
                check = 0;
                for (int i = n - 1; i >= 0; i--)
                {
                    if (str[i] == 'T')
                    {
                        x++;
                    }
                    else
                    {
                        y++;
                    }
                    if (y > x)
                    {
                        check = 1;
                        break;
                    }
                }
                if(check==1)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}