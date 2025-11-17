#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
     int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> occ(26);
        for (int i=0; i<n; i++)
            occ[s[i] - 'a'] += 1;
        pair<pair<int,char>,int> low, high;
        low = high = {{occ[s[0] - 'a'], s[0]}, 0};
        for (int i=1; i<n; i++) {
            low = min(low, {{occ[s[i] - 'a'], s[i]}, i});
            high = max(high, {{occ[s[i] - 'a'], s[i]}, i});
        }
        s[low.second] = s[high.second];
        cout << s << "\n";
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