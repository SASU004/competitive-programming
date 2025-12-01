#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back

bool is_prime(int x) {
    if (x<=1){
        return false;
    }
    for (int i=2; i*i<=x;i++) {
        if (x%i==0) {
            return false;
        }
    }
    return true;
}


void solution() {
    int x ,k;
    cin>>x>>k;
    if (k>1&&x>1)cout <<"NO"<<endl;
    else if(k==1){
        cout<<(is_prime(x)?"YES":"NO");
        cout<<endl;
    }else cout <<((k==2)?"YES":"NO")<<endl;
    
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