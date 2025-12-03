#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution(){
    int n,k;
    cin>>n>>k;
    string s;cin>>s;
    int z=count(s.begin(),s.end(),'0');
    int o=n-z;

    int maxCan=0;
    for(int start=0;start<k;start++){
        int len=0;
        for(int i=start;i<n;i+=k) len++;
        maxCan += (len+1)/2;
    }

    if(z<=maxCan && o<=maxCan) cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;
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