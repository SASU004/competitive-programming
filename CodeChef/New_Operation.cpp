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
    vl a(n);
    loop(0,n) cin>>a[i];
    vector<vl> mn(n,vl(n)),mx(n,vl(n));
    for(int len=1;len<=n;len++){
         for(int l=0;l+len-1<n;l++){
          int r=l+len-1;
         if(len==1){
             mn[l][r]=a[l];
             mx[l][r]=a[l];
      }else{
              mn[l][r]=LLONG_MAX;
             mx[l][r]=LLONG_MIN;
           for(int k=l;k<r;k++){
                ll v1=mn[l][k]+2*mn[k+1][r];
             ll v2=mx[l][k]+2*mx[k+1][r];
              mn[l][r]=min(mn[l][r],v1);
            mx[l][r]=max(mx[l][r],v2);
                }
            }
        }
    }
    cout<<mn[0][n-1]<<" "<<mx[0][n-1]<<endl;
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
