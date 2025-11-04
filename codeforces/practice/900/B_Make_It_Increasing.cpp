#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ;
    cin>>n;
    vector<int> a(n);
    loop(0,n)cin>>a[i];
      int ans = 0;
    for(int i = n - 2; i >= 0; i--){
        while(a[i] >= a[i + 1] && a[i] > 0){
            a[i] /= 2;
            ans++;
        }
        if(a[i] == a[i+1]){
            cout << -1 << '\n';
            return;
        }
    }
    cout << ans << '\n';
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