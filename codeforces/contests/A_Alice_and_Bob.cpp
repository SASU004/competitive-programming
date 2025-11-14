#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



 
void solution() {
    int n;
    ll a;
    cin >> n >> a;

    int left = 0, right = 0;

    for (int i = 0; i < n; i++) {
        ll v;
        cin >> v;
        if (v < a) left++;
        else if (v > a) right++;
    }

    if (right >= left) {
        if (right == 0) cout << 0 << "\n";
        else cout << a + 1 << "\n";
    } 
    else {
        cout << a - 1 << "\n";
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