#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    int n ;
    cin>>n;
    vector <ll>set1,set2;
  
    ll a=0,b=0;


    for (int i = n; i>=1; i--) {
        if(a > b){
            set2.push_back(i);
            b+=i;
        }else{
            set1.push_back(i);
            a+=i;
        }
    }
    if ( a==b){
        cout<<"YES"<<endl;
    cout<<set1.size()<<endl;
    for(auto it:set1){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<set2.size()<<endl;
    for(auto it:set2){
        cout<<it<<" ";
    }   
    cout<<endl;
}else{
    cout<<"NO"<<endl;
}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    //cin >> T; // uncomment if multiple test cases
    while (T--) {
        solution();
    }
    return 0;
}
