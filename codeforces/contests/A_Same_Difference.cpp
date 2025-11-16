#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)

void solution() {
    int n ;
    cin >> n;
    string s;
    cin >> s;

    char last = s[n - 1];
    int same = 0;

    loop(0, n) {
        if (s[i] == last) same++;
    }

    cout << (n - same) << "\n";
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