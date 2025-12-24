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
    ll n,m;
    cin>>n>>m;
    if(n==1){
        // this one is special case 
        // obv if you dont have nothing to do xor with 
        // then its itself mod is the ans 
        cout<<(m+1)%998244353<<endl;
        return;
    }
    ll p=1;
    while(p<=m)p<<=1;
    ll x=p-1;
    ll ans=2*m-x+1;
    if(ans<0)ans=0;
    cout<<ans%998244353<<endl;
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

going to learn xxor rn 

will come back to code this 


so fa is a sum of xor of adjacent elements, now i nmeed max of this fa 
each adjacent xor should be as large as possible.

so ai xor ai+1 = m basically the max possible value of adjacent 
this i can do ai+1 = aixor m
means once a1 is fixed, whole array is fixed


so now i need all a1 in 0,m which iss <=m

now xor can give a bigger number of m as well
i assume its a power of 2 which should be the smallest just bigger than m 
the difference x 


once pattern is fixed, n >= 2 does not matter anymore
just need to count valid a1


*/
