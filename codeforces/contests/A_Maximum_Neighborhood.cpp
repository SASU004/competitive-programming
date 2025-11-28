#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution() {
    ll n ;
    cin>>n;
    if ( n==1)cout << 1<<endl;
    else if ( n==2 )cout <<9<<endl;
     else{
            long long v1 = 4*n*n - n - 4;
            long long v2 = 5*n*n - 5*n - 5;
            cout << max(v1, v2) << "\n";
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


/*              obsevations

























*/