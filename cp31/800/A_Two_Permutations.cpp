#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ,a,b;
    cin>>n>>a>>b;
    if ( a ==b&a==n ||a + b +2<=n  ) {
        cout<<"yes"<<endl;
        
    }else cout <<"no"<<endl;
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


need 
say 

a a a a a || atleast 2 number to alter for distinct permutations|| b b b b b

if mis 1 then no permutation its the same 




















*/