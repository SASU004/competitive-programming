#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int a,b,n;
    cin>>a>>b>>n;
    vector<int>arr(n);
    loop(0,n)cin>>arr[i];
    ll max=b;
    loop(0,n) max+=min(arr[i],a-1);
    cout <<max<<endl;
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

b is the initial 


n's work over ig as soon as input over 

lets move 





















*/