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
#define read_mset(ms,n) for(int _i=0,_x; _i<n; _i++){ cin>>_x; ms.insert(_x); }


#define pqmax priority_queue<ll>
#define pqmin priority_queue<ll, vector<ll>, greater<ll>>

template<typename T>
void print_vec(const vector<T> &v){
    for(auto &x : v) cout << x << " ";
    cout << "\n";
}


void solution() {
    ll w,h,d;
    cin>>w>>h>>d;
   __int128_t volume=(__int128_t)w*h*d;
    int n;
    cin>>n;
    
    if (volume%n!=0){
        cout<<-1<<endl;
        return;
    }
    
    ll nw=__gcd((ll)n,w);
    ll remainw=n/nw;

    ll nh=__gcd((ll)remainw,h);
    ll remianh=remainw/nh;

    ll nd= __gcd((ll)remianh,d);
    ll remiand=remianh/nd;

if (remiand!=1){
    cout<<-1<<endl;
    return;
}
cout<<nw-1<<" "<<nh-1<<" "<<nd-1<<endl;

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


 w h d give volume right 
 we have n 
 whd /n gives each block volume 

no of cuts is basically min total side/min side -1 
10/2=5-1=4


got to learn __int128








*/
