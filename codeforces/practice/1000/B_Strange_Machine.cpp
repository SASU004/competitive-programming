#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back



void solution() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    vector<long long> a(q);
    for (int i = 0; i < q; i++) cin >> a[i];

    int A = count(s.begin(), s.end(), 'A');
    int B = count(s.begin(), s.end(), 'B');

    for (int i = 0; i < q; i++) {

        if (B == 0) {
            
            cout << a[i] << "\n";
            continue;
        }

        long long ans = 0;

        while (a[i] > 0) {
            for (char j : s) {
                if (a[i] == 0) break;

                ans++;

                if (j == 'A') a[i] -= 1;
                else a[i] /= 2;
            }
        }

        cout << ans << "\n";
    }
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