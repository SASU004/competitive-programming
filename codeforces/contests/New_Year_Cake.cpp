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
    ll a,b;cin>>a>>b;
    int ans =1;
    loop(1,21){
        int l=i;
        ll w1=0,d1=0,w2=0,d2=0;
        ll sz=1; 

        loop(1,l+1){
            int id=i;
            if(id%2==1)w1+=sz;
                else d1+=sz;
            if(id%2==1)d2+=sz;
                else w2+=sz;
            sz*=2;
        }
        if((w1<=a&&d1<=b)|| (w2<=a && d2<=b)){
            ans=l;

        }else break;
        
    }cout<<ans<<endl;
    
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

layer doubles every time then acc to constraint 
1+2+4...it will go till 2^l-1
so in constraint its just 1 mill
l =20 if i take it gives just the bigger than that 
so looop till 20 
going brute in this 















*/
