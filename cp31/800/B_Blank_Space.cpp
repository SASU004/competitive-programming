#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ,count=0, max0=0;
    cin>>n;
    vector<int >v(n);
    loop(0,n) cin>>v[i];
    loop(0,n){
        if (v[i]==0){
            count++;
        }
        else count=0;
        max0=max(max0,count);
    }
    cout<<max0<<endl;
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