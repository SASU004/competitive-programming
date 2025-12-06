#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for(int l=0;l<n;l++){
        int s=0;
        for(int r=l;r<n;r++){
            s+=a[r];
            bool ok=true;
            for(int i=l;i<=r;i++){
                if(s%a[i]==0){
                    ok=false;
                    break;
                }
            }
            if(ok)ans++;
        }
    }
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    // cin >> T; // uncomment if multiple test cases
    while (T--) {
        solution();
    }
    return 0;
}


/*              obsevations

























*/