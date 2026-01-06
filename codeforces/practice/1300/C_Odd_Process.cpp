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
    int n ;
    cin>>n;
    vl a(n); read_vec(a,n);
    vl odd,even;
    loop(0,n){
        if(a[i]&1) odd.pb(a[i]);
        else even.pb(a[i]);
    }
    if (odd.empty()){
        loop(0,n)
            cout<<0<<" ";
            cout<<endl;
            return;
        
    }
    sort(all(odd));
    sort(rall(even));
    
    int o=odd.size();
    int e=even.size();
    vl prefixeven(e+1,0);
    loop(0,e){
        prefixeven[i+1]=prefixeven[i]+even[i];
    }
    ll largestodd= odd.back();
    int usedodd=1;
    int usedeven=0;
   
    loop(1,n+1){// k ops 
        if(i>1){
            if(usedeven<e)usedeven++;
            else {
                if(usedodd+2<=o&&usedeven>0){//do we have 2 unused odd and an even to remove then we can do it 
                    usedodd+=2;
                    usedeven--;
                }
                else usedodd++;
            }
        }
     ll score=0;
        if (usedodd%2==1){
            score=largestodd+prefixeven[usedeven];
        }
        cout<<score<<" ";
       
} cout<<endl;
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
