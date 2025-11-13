#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)




void solution() {
  string s;
  cin >> s;
  int n = s.size();
  int bal = 0;
  for (int i = 1; i + 1 < n; i++) {
    if (s[i] == '(') bal++;
    else bal--;
    if (bal < 0) {
      cout << "YES\n";
      return;
    }
  }
  if (bal == 0) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
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

4
(())


(())()()


()




( ( ) ) ( ( ) ) 
























*/