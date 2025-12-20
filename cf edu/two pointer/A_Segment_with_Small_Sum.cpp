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



void solution(){
    int n;
    ll s;
    cin>>n>>s;
    vl a(n);read_vec(a,n);

    vl pref(n+1,0);
    loop(0,n) pref[i+1]=pref[i]+a[i];

    deque<int> dq;
    ll ans=0;

    loop(0,n+1){
        while(!dq.empty() && pref[i]-pref[dq.front()]>s)
            dq.pop_front();

        if(!dq.empty())
            ans=max(ans,(ll)i-dq.front());

        while(!dq.empty() && pref[dq.back()]>=pref[i])
            dq.pop_back();

        dq.push_back(i);
    }

    cout<<ans<<endl;
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

two pointer fails with negetives 
need prefix sum prolly 


not solved by me 

needed help 












*/
