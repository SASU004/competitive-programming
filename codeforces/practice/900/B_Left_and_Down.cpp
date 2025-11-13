#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    ll a, b, k;
    cin >> a >> b >> k;
    ll g = __gcd(a, b);
    if (a / g <= k && b / g <= k)
        cout << 1 << "\n";
    else
        cout << 2 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    cin >> T; // uncomment if multiple test cases
    while (T--) {
        solution();
    }
    return 0;
}


/*              obsevations

if k > a b 
ops = 1 
else ops 2 






















*/