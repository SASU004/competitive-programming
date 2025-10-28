#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)


// Function to solve one test case
void solution() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // Check if all four integers are equal
    if (a == b && b == c && c == d)
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

1. Problem checks if all four given integers are equal.
2. If all are same → print "YES", else print "NO".
3. Time complexity: O(1) per test case.
4. Space complexity: O(1).
5. Straightforward implementation — no loops or data structures needed.

*/
