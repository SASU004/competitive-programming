#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(a,n) for(int i = a; i < n; i++)

const int score[10][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
};

void solution() {
     char a[10][10];
        for (int i = 0; i < 10; i++) 
        {
            string s;
            cin >> s;
            for (int j = 0; j < 10; j++) 
            {
                a[i][j] = s[j];
            }
        }
        

        int total_score = 0; 
        for (int i = 0; i < 10; i++) 
        {
            for (int j = 0; j < 10; j++)
            {
                if (a[i][j] == 'X')
                {
                    total_score += score[i][j]; 
                }
            }
        }
        cout << total_score << endl; }

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