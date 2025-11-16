#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)




void solution() {
    ll a, b, n;
    cin >> a >> b >> n;

    ll gcd_ab = __gcd(a, b);
    ll reducedA = a / gcd_ab;
    ll limit = (a + b - 1) / b;

    if (n < limit) {
        cout << 1 << "\n";
        return;
    }

    if (n == limit) {
        if (limit % reducedA == 0) cout << 1 << "\n";
        else cout << 2 << "\n";
        return;
    }

    if (reducedA == 1) cout << 1 << "\n";
    else cout << 2 << "\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    cin >> T; // number of test cases
    while (T--) {
        solution();
    }
    return 0;
}


/*              observations









*/
