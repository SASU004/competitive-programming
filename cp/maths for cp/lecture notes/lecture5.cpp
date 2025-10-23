// PRIME FACTORIZATION USING SIEVE OF ERATOSTHENES

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
vector<int> spf(MAXN + 1, -1); // initialize all as -1

// Precompute smallest prime factor for every number
void sieve() {
    spf[1] = 1; // 1 is special

    for (int i = 2; i * i <= MAXN; i++) {
        if (spf[i] == -1) { // i is prime
            spf[i] = i; // mark itself
            // mark multiples of i
            for (int j = i * i; j <= MAXN; j += i) {
                if (spf[j] == -1)
                    spf[j] = i; // set smallest prime factor
            }
        }
    }

    // mark remaining primes that were untouched
    for (int i = 2; i <= MAXN; i++) {
        if (spf[i] == -1) spf[i] = i;
    }
}