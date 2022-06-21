#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()






{
    int T;
    cin>>T;
    
    while(T--)
    {
         int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(3, 0));
    v.p
    for (int i = 0; i < n; i++)
    {
        cin >> v[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i][0];
        v[i][2] = i + 1;
    }
    sort(v.begin(), v.end());
    unordered_set<int> st;
    priority_queue<vector<int>> pq;
    int t = 0;
    for(int i=0;i<n;i++)
    {
        if(t+v[i][1]<=v[i][0])
        {
            pq.push({v[i][1], v[i][2]});
            t += v[i][1];
            st.insert(v[i][2]);
        }
        else if(pq.size())
        {
            vector<int> temp = pq.top();
            if (temp[0] > v[i][1])
            {
                st.erase(st.find(temp[1]));
                pq.pop();
                t -= temp[0];
                pq.push({v[i][1], v[i][2]});
                t += v[i][1];
                st.insert(v[i][2]);
            }
        }
    }
    t = 0;
    cout << pq.size() << endl;
    for (int i = 0; i < n; i++)
    {
        if (st.find(v[i][2]) != st.end())
        {
            cout << v[i][2] << " " << t << " " << v[i][1] + t << endl;
            t += v[i][1];
        }
    }
    }

    return 0;
}