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
    vector<int> a;
    int x = 11;
    for (int i = 0; i < 9; i++)
    {
        a.push_back(x);
        x = (x * 10) + 1;
    }
    while (T--)
    {
        int n;
        cin >> n;
        if (n < 11)
        {
            cout << "NO" << endl;
            continue;
        }
        int c=0;
        for(auto it:a)
        {
            if(n%it==0)
            {
                cout<<"YES"<<endl;
                c=1;
                break;
            }
        }
        if(c==1)
        {
            continue;
        }
        int t = n;
        vector<int> arr;
        while (t > 0)
        {
            int l = t % 10;
            arr.push_back(l);
            t = t / 10;
        }
        reverse(arr.begin(), arr.end());
        while (arr.size() > 1)
        {
            int m = arr.size();
            for (int i = 0; i < m; i++)
            {
                arr[i]--;
            }
            int j = 0;
            while (j < arr.size())
            {
                if (arr[j] <= 0)
                {
                    arr.erase(arr.begin() + j);
                }
                else
                {
                    j++;
                }
            }
        }
        if (arr.size() == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}