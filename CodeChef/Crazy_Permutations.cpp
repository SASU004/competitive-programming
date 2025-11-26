#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution() {
    int n ;
    cin>>n;
    vector <int> a(n),b(n);
    loop(0,n)cin>>a[i];
    loop(0,n)cin>> b[i];
    for(int i = 1 ; i < n ; i++){
    if( (a[i-1] < a[i]) != (b[i-1] < b[i]) ){
        cout<<"NO"<<endl;
        return;
    }
}
cout<<"YES"<<endl;

    
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