#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution() {
    int n ;
    cin>>n;
    vector<ll>a(n);
    loop(0,n)cin>>a[i];
    int x;cin>>x;
    int m=*max_element(a.begin(),a.end());
    int n1=*min_element(a.begin(),a.end());
    if (x>m||x<n1)cout<<"no"<<endl;
    else  cout<<"yes"<<endl;
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