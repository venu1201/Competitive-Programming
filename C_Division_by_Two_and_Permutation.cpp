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
        vector<int> arr;

        set<int> st, t;
        int x;
        for (int i = 0; i < n; i++)
        {
            
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end(), greater<int>());

        for (int i = 0; i < n; i++)
        {
            x = arr[i];

            while (x > 0)
            {

                if (x >= 1 && x <= n && st.count(x) == 0)
                {
                    t.insert(x);
                    st.insert(x);
                    break;
                }
                else
                    st.insert(x);

                x = x / 2;
            }
        }


        int check = 0;
        for (int i = 0; i < n; i++)
        {

            if (t.count(i + 1) == 0)
            {
                check = 1;
                break;
            }
        }

        if (check == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}