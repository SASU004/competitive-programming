#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int neg = 0, zero = 0;

    for (int &x : a) {
        cin >> x;
        if (x == -1) neg++;
        else if (x == 0) zero++;
    }

    if (neg%2 ==0) cout <<zero<<endl;
    else if ( neg%2==1 )cout <<zero+2<<endl;
   

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
