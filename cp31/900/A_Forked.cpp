#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {
      int a,b,c,d,e,f;

    cin>>a>>b>>c>>d>>e>>f;

    set<pair<int, int>> vec1={

      {c+a,d+b},

      {c+a,d-b},

      {c+b,d+a},

      {c+b,d-a},

      {c-a,d+b},

      {c-a,d-b},

      {c-b,d+a},

      {c-b,d-a}

    };

    set<pair<int, int>> vec2={

      {e+a,f+b},

      {e+a,f-b},

      {e+b,f+a},

      {e+b,f-a},

      {e-a,f+b},

      {e-a,f-b},

      {e-b,f+a},

      {e-b,f-a}

    };

    int ans=0;

    for(auto i:vec1){

      for(auto j: vec2){

        if(i==j)

        ans++;

      }

    }

     

     cout<<ans<<"\n";  

     

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