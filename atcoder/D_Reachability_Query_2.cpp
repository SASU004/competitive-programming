#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define pb push_back


void solution (){
    int n,m;cin>>n>>m;
    vector<vector<int>>rev(n+1);
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        rev[y].push_back(x);
    }
    int q;cin>>q;
    vector<int>reachable(n+1,0);
    queue<int>qq;

    while(q--){
        int t,v;cin>>t>>v;

     if(t==1){
         if(!reachable[v]){
          reachable[v]=1;
              qq.push(v);
              while(!qq.empty()){
                 int u=qq.front();qq.pop();
                for(int x:rev[u]){
                    if(!reachable[x]){
                         reachable[x]=1;
                    qq.push(x);
                    }
                    }
                }
            }
        }else{
            if(reachable[v])cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    // cin >> T; // uncomment if multiple test cases
    while (T--) {
        solution();
    }
    return 0;
}


/*              obsevations

























*/