#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    ll n ;
    cin>>n;
    while ( n!=1){
        if (n%2==0){
            cout<<n<<" ";
            n=n/2;
        }
        else{
            cout<<n<<" ";
            n=3*n+1;
        }
    }
    cout<<1<<endl;
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
