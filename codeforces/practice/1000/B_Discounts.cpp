#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution(){
    int n,k;
    cin>>n>>k;
    vector<long long>a(n),b(k);
    for(auto &x:a)cin>>x;
    for(auto &x:b)cin>>x;
    sort(a.begin(),a.end(),greater<ll>());
    sort(b.begin(),b.end());
    ll ans=0;
    int idx=0;
    for(int x:b){
        if(idx+x>n)break;
        for(int j=0;j<x-1;j++)ans+=a[idx+j];
        idx+=x;
    }
    while(idx<n)ans+=a[idx++];
    cout<<ans<<endl;
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