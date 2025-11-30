#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    int ans = 0;
    ll last = -1e18;
    
    for(int i=0;i<n;i++){
        if(a[i] >last + 1){
            ans++;
            last=a[i];
        }
    }
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