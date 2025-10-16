#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<int> primes;
bool a[90000000]; // global allocation
int maxn = 90000000;

void build_sieve() {
    a[0] = a[1] = true;
    for (int i = 2; i * i < maxn; i++) {
        if (!a[i]) {
            for (int j = i * i; j < maxn; j += i) {
                a[j] = true;
            }
        }
    }
    for (int i = 2; i < maxn; i++) {
        if (!a[i]) primes.push_back(i);
    }
}

void solution() {
    int n;
    cin >> n;
    cout << primes[n - 1] << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    build_sieve(); // Run only once

    int T = 1;
    cin >> T;
    while (T--) {
        solution();
    }
    return 0;
}
