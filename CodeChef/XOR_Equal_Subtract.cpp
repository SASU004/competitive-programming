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


void solution(){
    int n; 
    cin>>n;
    vl a(n);
    read_vec(a,n);
    unordered_map<ll,int>mp;
    int maxfreq=0;
    int cnt_pow=0;
    loop(0,n){
        ll x=a[i];
        mp[x]++;
        maxfreq= max(maxfreq,mp[x]);

        if((x&(x-1))==0)cnt_pow++;
    }

    cout<<max(maxfreq,cnt_pow)<<endl;
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
