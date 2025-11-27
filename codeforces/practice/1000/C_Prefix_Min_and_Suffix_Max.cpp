#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution() {
    int n ;
    cin>>n;
    vector<int>a(n);
    loop(0,n)cin>>a[i];
    vector<int>v(n,0);

    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<mn){
            mn=a[i];
            v[i]=1;
    }
    }

    int mx = INT_MIN;
    for(int i=n-1;i>=0;i--){
        if ( a[i]>mx){
            mx=a[i];
            v[i]=1;
    }    
 }
    for ( auto &x :v)cout<<x;
    cout<<endl;
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