#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n;
    string s, t;
    cin >> n >> s >> t;

    
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    
    if (s == t)
        cout << "YES\n";
    else
        cout << "NO\n";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    cin >> T; // number of test cases
    while (T--) {
        solution();
    }
    return 0;
}


/*              observations






























*/
