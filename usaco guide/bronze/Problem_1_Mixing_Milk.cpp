#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i=a;i<n;i++)
#define pb push_back

const int n=3;
void solution(){
    ll c[3],m[3];
    loop(0,3) cin>>c[i]>>m[i];
    loop(0,100){
        int a=i%3;
        int b=(i+1)%3;
        ll can=c[b]-m[b];
        ll pour=min(m[a],can);
        m[a]-=pour;
        m[b]+=pour;
    }
    cout<<m[0]<<endl<<m[1]<<endl<<m[2]<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T=1;
    while(T--){
        solution();
    }
    return 0;
}
