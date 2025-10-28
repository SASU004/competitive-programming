
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



ll solution() {
    int n ;
    cin>>n;
    ll a[n];
    loop(0,n) cin>>a[i];
    ll count=INT_MAX;
    loop(1,n){
        if (a[i-1]>a[i]){
          count =0;break;
        }
         count = min(count,(a[i]-a[i-1])/2+1); 
}


cout <<count<<endl;


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

    
