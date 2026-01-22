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
    cin>>n;
    vl a(n);
    ll odd=0,even=0;
    ll sum=0;
    loop(0,n){
        cin>>a[i];
        sum+=a[i];

        if (a[i]%2==0)even++; else odd++;
      
    }
    if(odd==0||even==0){
        cout<<*max_element(all(a))<<endl;
        return;
    }    
    cout<<sum-(odd-1)<<endl;
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


so i figuered out till summation odd pairity similar no changfe after op
but the tle explaination was bullshit tbh 
its basicallly whenever we are wroking witbh multiple odds we cant take the whole value  of it 
we can only take until == 1 
now we are stacking up on one of the odd values 
so -1 for it 
and suppose we hyave x no of odds which each of them will be ==1 at last after max possible ops value addition to one of the odds 
therefore no of odds - 1 odd cause as told we are stacking the odds in one of the odds 













*/
