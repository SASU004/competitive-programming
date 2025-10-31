#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n,k;
    cin>>n>>k;
    vector <int> a(n);
    loop(0,n)cin>>a[i];
    ll subset =1,ans=1;
    sort(a.begin(),a.end());
    for ( int i=1;i<n;i++){
        if ( a[i]-a[i-1]>k) {subset=1; }
        else {subset ++;}
    
        ans=max(subset,ans);
    }cout <<n-ans<<endl;
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