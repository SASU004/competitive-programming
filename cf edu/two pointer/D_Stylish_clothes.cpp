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
    int n1; cin>>n1;
    vi a(n1); read_vec(a,n1);
    int n2; cin>>n2;
    vi b(n2); read_vec(b,n2);
    int n3; cin>>n3;
    vi c(n3); read_vec(c,n3);
    int n4; cin>>n4;
    vi d(n4); read_vec(d,n4);
    sort(all(a)); sort(all(b)); sort(all(c)); sort(all(d));
    int i=0,j=0,k=0,l=0;
    // pointer for each array
    int bi=0,bj=0,bk=0,bl=0;
    // store the current best index 
    int best=INT_MAX;
    while(i<n1 && j<n2 && k<n3 && l<n4){
        int x=a[i],y=b[j],z=c[k],w=d[l];
        int mn=min(min(x,y),min(z,w));
        int mx=max(max(x,y),max(z,w));
        // the max among all currents and the min 
        if(mx-mn<best){
            best=mx-mn;
            // update current best 
             bi=i; bj=j; bk=k; bl=l;
        }
        // move the minimum among the 4 element's pointer 
        if(mn==x) i++;
        else if(mn==y) j++;
        else if(mn==z) k++;
        else l++;
    }
    cout<<a[bi]<<" "<<b[bj]<<" "<<c[bk]<<" "<<d[bl]<<endl;
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
