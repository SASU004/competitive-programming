#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    int left = 0, right = 0;

   
    for (int i = 0; i < n && s[i] == '<'; i++)
        left++;

    for (int i = n - 1; i >= 0 && s[i] == '>'; i--)
        right++;

    int middle = n - left - right;

    
    if (middle > 1 || (middle == 1 && s[left] != '*')) {
        cout << -1 << "\n";
        return;
    }

   
    cout << max(left + middle, right + middle) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
