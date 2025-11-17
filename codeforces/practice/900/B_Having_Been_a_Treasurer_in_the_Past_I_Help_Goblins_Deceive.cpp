#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ;cin>> n;
    string s ;
    cin>>s;
  int64_t dash = count(s.begin(), s.end(), '-');
  int64_t under = n - dash;
  int64_t ans = (dash /2)* ((dash+1)/ 2) * under;
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