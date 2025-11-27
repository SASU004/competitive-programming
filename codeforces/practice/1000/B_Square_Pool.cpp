#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution() {
    int n, s; cin >> n >> s;
		int cnt = 0;
		for(int i = 0; i < n; i++) {
			int d1, d2, x, y; cin >> d1 >> d2 >> x >> y;
			if(x == y && d1 == d2) cnt++;
			if(x+y == s && d1 != d2) cnt++;
		}
		cout << cnt << endl;
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