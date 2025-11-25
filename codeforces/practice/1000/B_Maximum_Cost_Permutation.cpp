#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution(){
    int n ; 
    cin >> n ;
    vector<int> p(n+1) , seen(n+1,0) , z , miss ;
    for(int i=1;i<=n;i++){
        cin>>p[i];
        if(p[i]==0) z.push_back(i);
        else seen[p[i]]=1;
    }
    for(int i=1;i<=n;i++) if(!seen[i]) miss.push_back(i);
    sort(z.begin(),z.end());
    sort(miss.begin(),miss.end());
    int m = z.size();
    for(int i=0;i<m;i++){
        p[z[i]] = miss[m-1-i];
    }
    int L = -1 , R = -1 ;
    for(int i=1;i<=n;i++){
        if(p[i]!=i){ L=i; break; }
    }
    for(int i=n;i>=1;i--){
        if(p[i]!=i){ R=i; break; }
    }
    if(L==-1) cout<<0<<endl;
    else cout<<R-L+1<<endl;
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