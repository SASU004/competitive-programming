#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)



void solution() {

    
    int n,q;
    cin>>n>>q;
    vector <int> a(n);
    loop(0,n)
        cin>>a[i];
		long long old_sum = 0;
		for (int i = 0; i < n; i++)
		old_sum += a[i];

        vector<long long> prefix_sum(n + 1, 0);
		for (int i = 1; i <= n; i++)
			prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];

            while (q--) 
		{
			long long l, r, k;
			cin >> l >> r >> k;
			long long sum_to_remove = prefix_sum[r] - prefix_sum[l - 1];
			
			long long sum_to_add = (r - l + 1) * k;
			
			long long total_sum = old_sum - sum_to_remove + sum_to_add;
			
			if (total_sum % 2 == 1)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
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