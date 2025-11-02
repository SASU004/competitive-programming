#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)

void solution() {
    string s; 
    cin >> s;

    int cnt0 = 0, cnt1 = 0;
    for (char c : s) {
        if (c == '0') cnt0++;
        else cnt1++;
    }

    int moves = min(cnt0, cnt1); // each move removes one 0 and one 1
    if (moves % 2 == 0) cout << "NET\n";
    else cout << "DA\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        solution();
    }
    return 0;
}
