#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int n ;
    int ans=0;
    cin>>n;
    for (ll i=5; i<=n; i=i*5){
        ans+=n/i;
    }cout<<ans<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    // cin >> T; // uncomment if multiple test cases
    while (T--) {
        solution();
    }
    return 0;
}
