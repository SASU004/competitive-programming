#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
   ll n,k,x;
   cin>>n>>k>>x;
   ll min_sum=(k*(k+1))/2;
   ll max_sum=(n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

   if (x>=min_sum&& x <=max_sum){
    cout <<"yes"<<endl;
   }else cout <<"no"<<endl;
   
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




let say the k is 4 annd the n is 9 then the
prefix sum say from first is s1 and the last portion is s2
now 
then 1 2 3 4 5  || 6 7 8 9
here we see 
then the index of the s1 is nothbing but  n-k 
thern replace n-k in k


n-k* n-k+1  /2





















*/