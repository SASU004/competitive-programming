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
    int m=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            m=n/i;
            break;
        }
    }
    cout<<m<<" "<<n-m<<"\n";
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


like a bit tougher thgan general 1000's cause icpc q
now first thought decisive looking obvs in example 
but the diversioin is to just print and 1,n-1;
guess that obv wonmt work then it wouldnt be a icpc ques 

also linear time 

so it still works i its prime so m==0 1 ,n-1 ans 

now else iot will be the greatest factor m and then tjhen n-m
since linear the lcm pattern shows to iterate just till half 
basically pointing to compositie no finding for prime \
till sq root of n 




now 2ndly this all


should boil down to the 2nd largestt divisor and n- that 








*/
