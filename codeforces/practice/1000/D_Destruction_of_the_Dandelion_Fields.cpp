#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution(){
    ll n;cin>>n;
    ll sum=0;
    vector<ll>odd;
    vector<ll>a(n);
    loop(0,n){
        cin>>a[i];
        if(a[i]%2==0)sum+=a[i];
        else odd.pb(a[i]);
    }
    int m=odd.size();
    if(m==0){
        cout<<0<<endl;
        return;
    }
    sort(odd.rbegin(),odd.rend());
    int k=(m+1)/2;
    ll oddsum=0;
    loop(0,k)oddsum+=odd[i];
    cout<<sum+oddsum<<endl;
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


first is always off 
to turn on needed is odd
now if odd then it will turn off 


if is sort the vector then take the max odd first
now i will take up all the evens (can simply addd that up)
now will take up half the odds till n/2 of the odd size n 




















*/