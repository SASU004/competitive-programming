#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution() {
    int n;
    cin >> n;

    ll sum=0;
    int nonZero=0;

    for(int i =0; i<n;i++) {
        ll x;
        cin>>x;
        sum += x;
        if(x>0)nonZero++;
    }

    ll ans = min({(ll)n,sum-n+1,(ll)nonZero});

    cout << ans << endl;
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