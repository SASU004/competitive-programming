// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// void solution() {
//     int n ;
//     cin>>n;
//     cout<<pow(2,n)<<endl;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T = 1; 
//     // cin >> T; // uncomment if multiple test cases
//     while (T--) {
//         solution();
//     }
//     return 0;
// }


// this is actually for learning modulo 
#include <bits/stdc++.h>
using namespace std;    
#define ll long long
const int mod=1e9+7;
int main(){
    int n;
    cin>>n;
    ll ans=1;
    for(int i=1;i<=n;i++){
        ans=(ans*2)%mod;
    }
    cout<<ans<<endl;
    return 0;
}