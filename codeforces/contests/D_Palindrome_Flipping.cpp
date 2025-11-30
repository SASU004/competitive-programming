#include <bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    
    vector<pair<int,int>> ops;

    if(s[0]!=t[0]) ops.push_back({1,n}); 
    
    for(int i=1;i<n;i++){
        if(s[i]!=t[i]) ops.push_back({1,i+1});
    }

    cout<<ops.size()<<'\n';
    for(auto &p:ops) cout<<p.first<<" "<<p.second<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin>>T;
    while(T--) solution();
    return 0;
}
