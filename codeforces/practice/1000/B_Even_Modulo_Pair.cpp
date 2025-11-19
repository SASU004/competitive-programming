#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    ll n ;
    cin>>n;
    vector<ll> a(n);
    loop(0,n){
        cin>>a[i];
    }
     for(int i = 0; i < n; ++i) {
    for(int j = i + 1; j < n; ++j) {
      if(((a[j] % a[i]) & 1) == 0) {
        cout << a[i] << ' ' << a[j] << endl;
        return;
      }
    }    
} cout << -1 << endl;
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