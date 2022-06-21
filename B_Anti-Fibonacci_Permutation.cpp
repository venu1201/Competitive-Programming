#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int T;
    cin>>T;
    while (T--)
    {
        int n, i, x = 0;
        int y = 0, l, r;
        n = 0;
        cin >> n;
        int arr[n] = {0};

        for (i = 0; i < n; i++)
        {

            arr[i] = i + 1;
        }

        arr[2] = 2;
        arr[1] = 3;

        int flag = 0;
        x = n;
        do
        {
            flag = 1;
            for (i = 0; i < n - 2; i++)
            {
                if (arr[i] + arr[i + 1] == arr[i + 2])
                {
                    flag = 0;
                }
            }
            if (flag == 1)
            {
                for (auto p : arr)
                    cout << p << " ";
                cout << endl;
                x--;
            }

            if (x == 0)
                break;

        } while (next_permutation(arr, arr + n));
    }
return 0;
}