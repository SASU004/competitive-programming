#include <bits/stdc++.h>
using namespace std;

void solution() {
    int n;
    cin >> n;

    long long g = 0; // GCD of all elements
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (i == 0)
            g = x;
        else
            g = __gcd(g, x);
    }

    // Precomputed primes up to 200
    vector<int> primes;
    int M = 200;
    vector<int> isPrime(M + 1, 1);
    for (int i = 2; i <= M; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j <= M; j += i)
                isPrime[j] = 0;
        }
    }

    // Find first prime not dividing g
    for (int q : primes) {
        if (g % q != 0) {
            cout << q << "\n";
            return;
        }
    }

    cout << "-1\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solution();
    }

    return 0;
}



/*          observations    






















*/