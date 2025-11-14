#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<ll> prefix(n + 1, 0);

    ll originalSum = 0;
    ll maxGain = 0;
    ll bestLeftValue = LLONG_MIN;

    for (int r = 1; r <= n; r++) {
        ll x;
        cin >> x;

        originalSum += x;
        prefix[r] = prefix[r - 1] + x;

        ll L_r = prefix[r - 1] - (1LL * r * r - r);
        bestLeftValue = max(bestLeftValue, L_r);

        ll R_r = (1LL * r * r + r) - prefix[r];
        ll gain = bestLeftValue + R_r;

        maxGain = max(maxGain, gain);
    }

    cout << originalSum + maxGain << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
