#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ;
    cin>>n;
    set <ll>s;
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x); 


}cout << s.size()*2-1<< endl;
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


/*      observations






*/ 