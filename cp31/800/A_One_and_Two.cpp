#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n,c2=0;cin >>n;
    vector<int> hash;
    vector<int>v(n);
    loop(0,n){
        cin>>v[i];
        if (v[i]==2) c2++;

    }

    int ans =-1;
    if (c2%2!=0) {
        cout<<ans<<endl;
        return;
    }
   
    else {
        int half = c2/2;
        int count =0;
        for (int i =0;i<n;i++) {
            if (v[i]==2) count++;
            if (count==half) {
                ans = i+1;
                break;
            }
        }cout <<ans<<endl;
    }
    

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