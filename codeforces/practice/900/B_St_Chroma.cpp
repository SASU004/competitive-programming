#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ,x;
    cin>>n>>x;
 for (int i = 0; i < x; i++) cout << i << " ";
 for (int i = x+1; i < n; i++) cout << i << " ";
    if (x < n) cout << x;
    cout << '\n';

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