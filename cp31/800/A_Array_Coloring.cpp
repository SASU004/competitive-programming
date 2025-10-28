#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ;
    cin>>n;
    vector<int> a(n);
    int count=0;
    loop(0,n) {
        cin>>a[i];
        if (a[i]%2==1) count++;
    }
    if (count%2==1) cout <<"NO"<<endl;
    else cout <<"YES"<<endl;
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