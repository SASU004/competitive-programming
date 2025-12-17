#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define endl '\n'

#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vl vector<long long>

#define pii pair<int,int>
#define pll pair<long long,long long>

#define vpii vector<pii>
#define vpll vector<pll>

#define si set<int>
#define sll set<long long>
#define spi set<pii>
#define spl set<pll>

#define msi multiset<int>
#define msll multiset<long long>

#define usi unordered_set<int>
#define usll unordered_set<long long>

#define INF 1e18
#define MOD 1000000007

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define read_vec(v,n) for(int i=0;i<n;i++) cin>>v[i]
#define read_set(s,n) for(int _i=0,_x; _i<n; _i++){ cin>>_x; s.insert(_x); }


#define pqmax priority_queue<ll>
#define pqmin priority_queue<ll, vector<ll>, greater<ll>>

template<typename T>
void print_vec(const vector<T> &v){
    for(auto &x : v) cout << x << " ";
    cout << "\n";
}



void solution() {
    int n;
    cin>>n;
    vl a(n),b(n);
    read_vec(a,n);read_vec(b,n);
    unordered_map<ll,ll>besta,bestb;
    ll cnta=1;
    besta[a[0]]=1;
    loop(1,n){
        if(a[i-1]==a[i])cnta++;else cnta=1;
        besta[a[i]]=max(besta[a[i]],cnta);
    }

    //since a[i]is unning from 1 soo a[o neds to be stored 
    
      ll cnt=1;
      bestb[b[0]]=1;
    loop(1,n){
        if(b[i-1]==b[i])cnt++;else cnt=1;
        bestb[b[i]]=max(bestb[b[i]],cnt);
    }

    // same element check in b will be a.first in b.second like add up 
    
    ll ans =0;
    for (auto &p:besta){
        ans= max(ans,p.second+bestb[p.first]);
    }
    for(auto &q :bestb){
        ans=max(ans,q.second);

    }

cout<<ans<<endl;


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
