#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ;
    cin>>n;
    vector <int>a(n);
    loop(0,n) cin>>a[i];
    int k=abs(a[0]-1);
   for ( int i =1 ;i<n;i++){
     k= __gcd(k,abs(a[i]-(i+1)));
    }
   cout <<k<<endl;
  
      
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