#include <bits/stdc++.h>
using namespace std;

struct Op {
    int hot, cold;
};

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    // Check condition 1: cannot cool any dish
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            cout << -1 << '\n';
            return;
        }
    }

    vector<vector<int>> src(n + 1), need(n + 1);
    for (int i = 0; i < n; i++) {
        src[a[i]].push_back(i);
        if (a[i] < b[i]) need[b[i]].push_back(i);
    }

    // Check condition 2: no demand without source
    for (int t = 1; t <= n; t++) {
        if (!need[t].empty() && src[t].empty()) {
            cout << -1 << '\n';
            return;
        }
    }

    vector<Op> ops;
    for (int t = n; t >= 1; t--) {
        if (need[t].empty()) continue;
        int source = src[t].back();
        for (int idx : need[t]) ops.push_back({source + 1, idx + 1});
    }

    cout << ops.size() << '\n';
    for (auto &x : ops) cout << x.hot << " " << x.cold << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) solve();
}
