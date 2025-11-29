#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i=a;i<n;i++)
#define pb push_back


void solution(){
    int n; 
    cin >> n;
    vector<int> freq(2*n+1);
    for(int i=0;i<2*n;i++){
        int y; 
        cin >>y;
        freq[y]++;
    }
    int oddCount=0, evenCount=0;
    for(int p:freq){
        if (p>0){
            if(p%2==1) oddCount++;
            else evenCount++;
        }
    }
    int x = min(evenCount,n);
    if(oddCount==0){
        if((x&1)!=(n&1)) x--;
        if(x<0) x=0;
    }
    cout <<oddCount+2*x <<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T=1;
    cin>>T;
    while(T--) solution();
    return 0;
}


/*              obsevations





















*/
