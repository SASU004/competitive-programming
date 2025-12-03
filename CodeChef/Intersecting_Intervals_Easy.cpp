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

    vector<ll>ea(n),sa(n),eb(n),sb(n);

    ea[0]=a[0];
    eb[0]=b[0];
    for(int i=1;i<n;i++){
        ea[i]=max(a[i],ea[i-1]+a[i]);
        eb[i]=max(b[i],eb[i-1]+b[i]);
    }

    sa[n-1]=a[n-1];
    sb[n-1]=b[n-1];
    for(int i=n-2;i>=0;i--){
        sa[i]=max(a[i],sa[i+1]+a[i]);
        sb[i]=max(b[i],sb[i+1]+b[i]);
    }

    ll ans=LLONG_MIN;
    loop(0,n){
        ll bestA=ea[i]+sa[i]-a[i];
        ll bestB=eb[i]+sb[i]-b[i];
        ans=max(ans,bestA+bestB);
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T=1;
    cin>>T;
    while(T--) solution();
    return 0;
}


/*              obsevations






























*/
