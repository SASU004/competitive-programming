#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
    int n ;
    cin>>n;
    string s;
    cin>> s;
    int current=1,ans=1;
    loop(1,n){
        if (s[i-1]!=s[i]) current =1;
        else current++;
        ans=max(current,ans);

}cout <<ans+1<<endl;
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