#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution() {
    int n ;
    cin>>n;
    for ( int i =n;i>=1;i--){
        cout <<i<< " ";

    }
    cout << n ;
    for ( int i= 1;i<n;i++){
        cout <<" "<<i;
    }
    cout << endl;
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