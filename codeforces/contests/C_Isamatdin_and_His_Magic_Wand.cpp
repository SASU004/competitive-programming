#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n;
    cin >> n;

    vector<ll> a(n);
    int even_count = 0, odd_count = 0;

 
    loop(0, n) {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    
    if (even_count > 0 && odd_count > 0)
        sort(a.begin(), a.end());

    
    loop(0, n) {
        if (i == n - 1)
            cout << a[i] << '\n';
        else
            cout << a[i] << ' ';
    }
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
