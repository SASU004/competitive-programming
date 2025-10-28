#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int x,k; cin >> x >> k;
    if ( x %k==0){
        cout <<2<<endl;
        cout <<x-1<<" "<<1<<endl;

    }else {cout <<1<<endl; cout <<x<<endl;}
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