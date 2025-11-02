#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ;
    cin>>n;
    vector <int> a(n);
    loop(0,n){cin>>a[i];
        if (a[i]==1)
        a[i]++;
    }
    for ( int i = 0;i<n-1;i++){
       
            if (a[i+1]%a[i]==0){
                a[i+1]++;
            }
       
    }
    loop(0,n)cout <<a[i]<<" ";
    cout <<endl;
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