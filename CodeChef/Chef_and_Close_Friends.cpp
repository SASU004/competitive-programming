#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution(){
    int x,y,z;
    cin>>x>>y>>z;
    int l = max(x-y , x-z);
    int r = min(x+y , x+z);
    if(r < l){
        cout<<0<<"\n";
        return;
    }
    int ans = r-l+1;
    if(l<=x && x<=r) ans--;
    cout<<max(0,ans)<<"\n";
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