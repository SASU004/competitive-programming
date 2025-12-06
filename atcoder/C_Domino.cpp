#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back

void solution(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i]; 
    ll reach=a[0]-1;

    for(int i=0;i<n;i++){ 
        if(i>reach)break;
 
        ll newReach=(ll)i+a[i]-1;
        if(newReach>reach)reach=newReach;
    }
    ll fallen=reach+1;
    if(fallen>n)fallen=n;

    cout<<fallen;
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