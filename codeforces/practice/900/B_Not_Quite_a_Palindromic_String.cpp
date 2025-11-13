#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)

void solution() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int zeros = count(s.begin(), s.end(), '0');
    int ones = n - zeros;

  
    int m = n / 2;
    if (k > m) {
        cout << "NO\n";
        return;
    }

   
    if (zeros == 0 || ones == 0) {
        cout << (k == m ? "YES\n" : "NO\n");
        return;
    }

    
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    cin >> T;
    while (T--) {
        solution();
    }
    return 0;
}
