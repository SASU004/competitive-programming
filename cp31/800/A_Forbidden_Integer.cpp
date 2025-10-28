#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    
        int n,k,x;cin>>n>>k>>x;
        if(x!=1)
        {
            cout<<"YES"<<'\n';
            cout<<n<<'\n';
            for(int i=0;i<n;++i) cout<<1<<' '; cout<<'\n';
        }
        else
        {
            if(k>=2 && n%2==0)
            {
                cout<<"YES"<<'\n';
                cout<<n/2<<'\n';
                for(int i=0;i<n/2;++i) cout<<2<<' '; cout<<'\n';
            }
            else if(k>=3)
            {
                cout<<"YES"<<'\n';
                cout<<n/2<<'\n';
                cout<<3<<' ';
                for(int i=1;i<n/2;++i) cout<<2<<' '; cout<<'\n';
            }
            else
            {
                cout<<"NO"<<'\n';
            }
    
}}

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