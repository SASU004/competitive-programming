#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ;
    cin>>n;
    vector<int>v(n);
    loop(0,n){
        cin>>v[i];
    }int count =0;
    loop(1,n){
        if (v[i-1]%2== v[i]%2 ){
            v[i-1]=v[i-1]*v[i];
            count ++;
        }
        
    }cout << count <<endl;
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