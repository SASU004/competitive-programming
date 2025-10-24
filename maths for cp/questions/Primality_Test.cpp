#include <bits/stdc++.h>
using namespace std;

#define ll long long



void solution() {
    int n;
    cin >> n;

    if (n <= 1) {
        cout << "NO" << endl;
        return;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
