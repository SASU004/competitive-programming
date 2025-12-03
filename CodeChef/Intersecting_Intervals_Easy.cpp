#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i=a;i<n;i++)
#define pb push_back

void solution(){
    int n; cin>>n;
    vector<ll>a(n),b(n);
    loop(0,n) cin>>a[i];
    loop(0,n) cin>>b[i];
    
    vector<ll>endA(n),startB(n);
    
    ll cur=0;
    loop(0,n){
        cur = max(a[i], cur + a[i]);
        endA[i] = cur;
    }
    cur=LLONG_MIN;
    // reverse kadane
    ll running=0;
    for(int i=n-1;i>=0;i--){
        running = max(b[i], running + b[i]);
        startB[i] = running;
    }

    ll ans = LLONG_MIN;
    loop(0,n) ans = max(ans, endA[i] + startB[i]);
    
    cout<<ans<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin>>T;
    while(T--) solution();
    return 0;
}


/*              obsevations






























*/
 