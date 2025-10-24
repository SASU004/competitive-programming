#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)


ll power(ll base, ll exp, ll mod) {
   ll result = 1;
   
    while (exp > 0) {
        if (exp % 2 == 1) { 
            result = (result*base)%mod;
            exp--;
        } else {
            base = (base * base)%mod;
            exp /= 2;
        }
         
    }

    return result % mod;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    // cin >> T; // uncomment if multiple test cases
    while (T--) {
        int n ;
    cin>>n;
    cout << power ( 8, n, 10 ) << "\n";
     
    }
    return 0;
}
