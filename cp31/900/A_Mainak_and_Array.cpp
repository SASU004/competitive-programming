#include <bits/stdc++.h>

using namespace std;


#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n;
    cin >> n;
    vector<int> v(n);
    loop(0, n) cin >> v[i];
    long long answer = v[n - 1] - v[0];

    for (int i = 1; i < n; i++)
        answer = max(answer, (ll)v[i] - v[0]);

    for (int i = 0; i < n - 1; i++)
        answer = max(answer, (ll)v[n - 1] - v[i]);

    for (int i = 0; i < n - 1; i++)
        answer = max(answer, (ll)v[i] - v[i + 1]);

    cout << answer << endl;
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
