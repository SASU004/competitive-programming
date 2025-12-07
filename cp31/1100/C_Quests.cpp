#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution() {
    int n,k;
    cin>>n>>k;
    vector<ll> a(n),b(n);

    loop(0,n)cin>>a[i];
    loop(0,n)cin>>b[i];
    ll maxi=0,sum=0,ans=0;
    for (int i=0;i<min(k,n);i++){
        sum+=a[i];
        maxi=max(maxi,b[i]);
        ans=max(ans,sum+(k-(i+1))*maxi);

    }cout<<ans<<endl;
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