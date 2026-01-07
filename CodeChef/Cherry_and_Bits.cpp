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
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    read_vec(a,n);
 int q;cin>>q;
  vector<vi> diff(n + 2, vi (m + 2, 0));
  while(q--){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    //  o based first 
    x1--;y1--;x2--;y2--;
    diff[x1][y1]^=1;  
     diff[x2+1][y1]^=1;
    diff[x1][y2+1]^=1;
 
    diff[x2+1][y2+1]^=1;
  }
    loop(0,n){
        for(int j=0;j<m;j++){
            if(i>0)diff[i][j]^=diff[ i-1][j];
            if(j>0)diff[i][j]^=diff[i][j-1];
            if(i>0&&j>0) diff[i][j]^= diff[i-1][j-1];
        }
    }
           loop(0,n){
        for(int j=0;j<m;j++){
            if(diff[i][j]&1){
               a[i][j] = (a[i][j] =='0'?'1':'0');

            }
        }
       
    
  }
    
loop(0,n){
    cout<<a[i]<<endl;
}

      
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















*/
