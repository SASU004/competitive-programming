#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    c-=a; d-=b;
    if(a>b) swap(a,b);
    if(c>d) swap(c,d);
    if(((a+1)<<1)>=b && ((c+1)<<1)>=d) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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