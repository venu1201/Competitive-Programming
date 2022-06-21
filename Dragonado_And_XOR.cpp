#include <bits/stdc++.h>

using namespace std;

#define all(x) begin(x), end(x)
#define len(x) (int)x.size()

typedef long long ll;

const int maxv = 12;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }
        map<ll, vector<pair<int, int>>> pops;
        for (int i = 0; i < min(maxv, n); i++) {
            for (int j = i + 1; j < min(maxv, n); j++) {
                ll pop = __builtin_popcountll(v[i] ^ v[j]);
                if (!pops.count(pop)) {
                    pops[pop] = vector<pair<int, int>>();
                }
                pops[pop].push_back({i, j});
            }
        }
        bool found = false;
        for(auto it:pops)
        {
            cout<<it.first<<endl;
            for(auto x:it.second)
            {
                cout<<x.first<<" "<<x.second<<endl;
            }
        }
        for (auto& it : pops) {
            auto& w = it.second;
            for (int i = 0; !found && i < len(w); i++) {
                for (int j = i + 1; !found && j < len(w); j++) {
                    if (w[i].first != w[j].first && w[i].first != w[j].second &&
                        w[i].second != w[j].first && w[i].second != w[j].second) {
                        printf("%d %d %d %d\n", w[i].first+1, w[i].second+1, w[j].first+1, w[j].second+1);
                        found = true;
                    }
                }
            }
            if (found) break;
        }
        if (!found) {
            printf("-1\n");
        }
    }
	return 0;
}
