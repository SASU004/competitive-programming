#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i <=n; i++)



void solution() {
    int a ,b,c ,d ;
    cin>>a>>b>>c>>d;
   
    int diff= d-b;
    int count =diff;
    a+=diff;
    if (c>a||d<b){
        cout<<-1<<endl;
        return;
    }
    else if(a>c) count+= (a-c);
    cout<<count<<endl;
    
        

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