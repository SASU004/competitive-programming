#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution(){
    int n,k;cin>>n>>k;
    string s;cin>>s;

    if(k==n){
        for(int i=1;i<=n;i++) cout<<'-';
        cout<<endl;
        return;
    }

    int forcedL=0,forcedR=0,free=0;
    for(char c:s){
        if(c=='0') forcedL++;
        else if(c=='1') forcedR++;
        else free++;
    }

    int L=1+forcedL;
    int R=n-forcedR;

    vector<char> a(n+1,'+');

    for(int i=1;i<=forcedL;i++) a[i]='-';
    for(int i=n-forcedR+1;i<=n;i++) a[i]='-';

    int l=L,r=R;

    for(int i=0;i<free;i++){
        if(l<=R){
            a[l]='?';
            l++;
        }
        if(r>=L){
            a[r]='?';
            r--;
        }
    }

    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
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

so here mostly its simple 
except we add up ? from both sides in case of 2 cause
it can be done to both sides 
























*/