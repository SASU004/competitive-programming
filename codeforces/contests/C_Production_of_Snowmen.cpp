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
    vl a(n),b(n),c(n);
    read_vec(a,n);
    read_vec(b,n);
    read_vec(c,n);

    ll ab=0;
    loop(0,n){
        // can shift from 0 till last n-1
        ll shift =i;
        bool snowman= true ;
        loop(0,n){
            int id=i;
            
                if(a[id]>=b[(id+shift)%n]){
                    snowman=false ;break;
                }
            
        }
        
        if(snowman)ab++;
    }
    // samer as above 
    ll bc=0;
    loop(0,n){
        ll shift =i;
        bool snowman=true;
        loop(0,n){
            ll id=i;
                if(b[id]>=c[(id+shift)%n]){
                    snowman=false;break;
                }
            
        }
        
        if(snowman)bc++;
    }
    
    ll res= (ll)n*ab*bc;
    cout<<res<<endl;
    
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



snowman 1 use a1 b1 c 1 //1 =ijk index 

n use ai+n-1 same b c 
only valid is a<b<c
also mod for circular 

now could be done in one loop 
but ab and bc shift is independent 













*/
