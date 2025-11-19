#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution() {
    int n ;
    cin>>n;
     vector<int> a(n);
     int ops =0;
    for (int &x : a) cin >> x;
//    first all even pos to pref max 
vector<int> pre(n);
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    pre[i] = max(pre[i - 1], a[i]);
    // now neighbours diff
    ll ans = 0;
    for (int i = 0; i < n; i += 2){
        int dif = -1;
        if (i > 0)
            dif = max(dif, a[i] - pre[i - 1]);

        if (i < n - 1)
            dif = max(dif, a[i] - pre[i + 1]);

        ans += dif + 1;
    }

    cout << ans << "\n";
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





FREAKING SEXY QUESTION 



















*/