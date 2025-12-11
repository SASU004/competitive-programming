#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)

#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int,int>
#define pll pair<long long,long long>


#define vpii vector<pii>
#define vpll vector<pll>

#define INF 1e18
#define MOD 1000000007

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define read_vec(v,n) for(int i=0;i<n;i++) cin>>v[i]

#define pqmax priority_queue<ll>
#define pqmin priority_queue<ll, vector<ll>, greater<ll>>

template<typename T>
void print_vec(const vector<T> &v){
    for(auto &x : v) cout << x << " ";
    cout << "\n";
}



void solution() {
    int n,p;
    cin>>n>>p;
    vl a(n),b(n);read_vec(a,n);read_vec(b,n);
    vpll v(n);
    loop(0,n){
        v[i]={b[i],a[i]};
    }
    sort(all(v));

   ll min_cost=p;
   ll shared=1;
   for (auto it:v){

    ll can_share=it.second;
    ll share_cost=it.first;
        if(share_cost>=p) break;

        if(shared+can_share>n){
             min_cost+=(n-shared)*share_cost;
            shared=n;
             break;
            //  all shared done dusted;
        }
        else{
             min_cost+=can_share*share_cost;
            shared+=can_share;

        }
   }

   min_cost+=(n-shared)*p;
   cout<<min_cost<<endl;
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
