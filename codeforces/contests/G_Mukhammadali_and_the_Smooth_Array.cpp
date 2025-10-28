#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ;
    cin>>n;
    ll total = 0;
     vector<ll> a(n + 1), c(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i]; 
    for (int i = 1; i <= n; i++) cin >> c[i];
    for (int i = 1; i <= n; i++) total += c[i];
    
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

























*/