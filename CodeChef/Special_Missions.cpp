#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution(){
    int n; ll c;
    cin>>n>>c;
    vector<ll>val(n);
    for(int i=0;i<n;i++) cin>>val[i];
    string s; cin>>s;
    ll sum0=0,sum1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') sum0+=val[i];
        else sum1+=val[i];
    }
    ll res=sum0;
    if(sum0>=c) res=max(res,sum0-c+sum1);
    cout<<res<<endl;
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