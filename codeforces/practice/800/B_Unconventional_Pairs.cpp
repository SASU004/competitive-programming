#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ;
    ll diff = 0;
    cin>>n;
    vector <ll> a(n);
    loop(0,n) cin>>a[i];
    sort (a.begin(), a.end());
    for(int i = 0; i < n; i+=2){ 

    diff= max(diff, a[i+1] - a[i]);

    }
    cout << diff<<endl;

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