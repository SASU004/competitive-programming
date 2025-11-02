#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n;
    cin >> n;
    vector<int> a(n);
    loop(0, n) cin >> a[i];

    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    cout << *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end()) << endl;
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




1 3 9 11 12 5 7 8      3             9 11 12 5 7 8

                                      8 7 5 12 11 9
                                       5 7 8 9 11 12
9 11 5 7

7 5 11 9 


5 7 9 11

full rev
subsegment rev













*/