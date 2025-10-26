#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        // count frequency of each number
        map<int, int> freq;
        for (int x : a) freq[x]++;

        vector<int> f;
        for (auto &p : freq) f.push_back(p.second);

        int ans = 0;
        // try all possible x = 1..max frequency
        for (int x = 1; x <= *max_element(f.begin(), f.end()); x++) {
            int cnt = 0;
            for (int y : f)
                if (y >= x) cnt++;
            ans = max(ans, cnt * x);
        }

        cout << ans << "\n";
    }
}
