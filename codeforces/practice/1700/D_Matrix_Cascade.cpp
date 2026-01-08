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

#define lb(v,x) (lower_bound(all(v),x) - (v).begin())   // -> first >= x
#define ub(v,x) (upper_bound(all(v),x) - (v).begin())   // -> first > x
#define rlb(v,x) (lower_bound(all(v),x) - (v).begin() - 1)   // -> last < x
#define rub(v,x) (upper_bound(all(v),x) - (v).begin() - 1)   // -> last <= x
#define cnt_range(v,l,r) (upper_bound(all(v),r) - lower_bound(all(v),l))
template<typename T>
void print_vec(const vector<T> &v){
    for(auto &x : v) cout << x << " ";
    cout << "\n";
}



void solution() {
    int n;
    cin >> n;

    static int a[3005][3005];
    static int b[3005][3005];
    static int c[3005][3005];

    // clear arrays
    loop(0,n+2){
         for(int j=1;j<=n;j++){
            a[i][j] = b[i][j] = c[i][j] = 0;
        }
    }

    // input
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch;
            cin >> ch;
            a[i][j] = ch - '0';
        }
    }

    // prefix xor upwards
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n;j++){
            a[i][j] ^= a[i-1][j];
        }
    }

    int ans = 0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(b[i][j]){
                a[i][j] ^= 1;
                b[i+1][j-1] ^= 1;
            }
            if(c[i][j]){
                a[i][j] ^= 1;
                c[i+1][j+1] ^= 1;
            }
        }

        for(int j=1;j<=n;j++){
            if(a[i][j]){
                ans++;
                b[i+1][j-1] ^= 1;
                c[i+1][j+1] ^= 1;
            }
        }
    }

    cout << ans << endl;
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

i got the whole idea of the problem but 
this problem hasnt been solved by me 
couldnt code this up
this is copy pasted just for the sake of learning difference rray 
but this is more likely a propagation problem 















*/
