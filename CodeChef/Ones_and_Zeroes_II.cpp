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


void solution(){
    int n;cin>>n;
    string s;cin>>s;
    ll o=0,z=0;
    vi pos;
    loop(0,n){
        if(s[i]=='1'){o++;pos.pb(i);}
        else z++;
    }
    ll f=min((ll)n,2*o);
    ll l=f,max0=min(o,z),swap=0,bal=0,used0=0;
    int j=0;
    loop(0,l){
        bool one=0;
        if(bal==0)one=1;
        else if(used0==max0)one=1;
        else{
            if(j<pos.size()){
                if(pos[j]<=i)one=1;
                else one=0;
            }else one=0;
        }
        if(one){
            swap+=llabs(pos[j]-i);
            j++;bal++;
        }else{
            bal--;used0++;
        }
    }
    cout<<f<<" "<<swap<<endl;
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
