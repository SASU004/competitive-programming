#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back

void solution(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;int q;
    cin>>n>>q;

    set<pair<ll,ll>>s;
    ll black=0;

    while(q--){
        ll l,r;
        cin>>l>>r;

        auto it=s.lower_bound({l,LLONG_MIN});
        if(it!=s.begin())it--;

        ll nl=l,nr=r;
        vector<pair<ll,ll>>rem;

        while(it!=s.end()&&it->first<=r+1){
            if(it->second<l-1){
                it++;
                continue;
            }
            nl=min(nl,it->first);
            nr=max(nr,it->second);
            black-=it->second-it->first+1;
            rem.push_back(*it);
            it++;
        }

        for(auto &p:rem)s.erase(p);

        s.insert({nl,nr});
        black+=nr-nl+1;

        cout<<n-black<<endl;
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