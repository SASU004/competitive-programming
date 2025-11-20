#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)
#define pb push_back


void solution(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    int xa=0,xb=0;

    loop(0,n){
        cin>>a[i];
        xa^=a[i];
    }
    loop(0,n){
        cin>>b[i];
        xb^=b[i];
    }

    if((xa^xb)==0){
        cout<<"Tie\n";
        return;
    }

    int pos=-1;
    loop(0,n){
        if(a[i]!=b[i]){
            pos=i;
        }
    }

    if(pos==-1){
        cout<<"Tie\n";
    }
    else{
        if((pos+1)%2==1){
            cout<<"Ajisai\n";
        }
        else{
            cout<<"Mai\n";
        }
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