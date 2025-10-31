#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n,k;
    cin>>n>>k;

    vector<int> a(n*k);
    loop(0,a.size()) cin>>a[i];

    int sum =0;
    for ( int i = 0 ; i <;i+=n){
        sum+=a[i/2-1];

    }
    cout <<sum<<endl;


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