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
    cin>>n;
    vl a(n);
    read_vec(a,n);
    ll d=0;
    loop(1,n){
        d=__gcd(d,a[i]-a[i-1]);
    }


    //  noww uhh how do i get the exact no of elements 
   

    ll ans=0;
    loop(1,n){
        ans+=(a[i]-a[i-1])/d-1;
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






 no of eleemts to fill will be the sum that ik 
 now if in the gap there will be the gap/d elemets i mean should be 
 but since i am taking both ends numbers the last one 
 which is also divisible is counted twice 
 like its there still my logic counts there is none 
 so -1 
 apparantly this siolves it 









*/
