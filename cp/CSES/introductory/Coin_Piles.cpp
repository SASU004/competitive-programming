#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int a,b ;

    cin>>a>>b;
  if ((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b)){

        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
