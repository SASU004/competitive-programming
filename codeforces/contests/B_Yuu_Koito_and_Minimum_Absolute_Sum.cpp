#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back

void solution() {
    int n;
    cin>>n;
    vector<ll>a(n);
    loop(0,n)cin>>a[i];
    ll ans;
    if(a[0]!=-1&&a[n-1]!=-1)ans=llabs(a[n-1]-a[0]);
    else ans=0;
    if(a[0]==-1&&a[n-1]==-1){
        a[0]=0;
        a[n-1]=0;
    }else if(a[0]==-1){
        a[0]=a[n-1];
    }else if(a[n-1]==-1){
        a[n-1]=a[0];
    }
    for(int i=1;i<n-1;i++)if(a[i]==-1)a[i]=0;
    cout<<ans<<endl;
    for(int i=0;i<n;i++){
        if(i)cout<<" ";
        cout<<a[i];
    }
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