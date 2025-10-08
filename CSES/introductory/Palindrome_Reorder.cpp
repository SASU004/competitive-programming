#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solution() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'A']++;

    int oddCount = 0;
    int oddIdx = -1;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] % 2 != 0) {
            oddCount++;
            oddIdx = i;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return;
    }

    string firstHalf;
    firstHalf.reserve(s.size() / 2);
    for (int i = 0; i < 26; ++i) {
        firstHalf += string(freq[i] / 2, char('A' + i));
    }

    string secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());

    string middle = "";
    if (oddIdx != -1) middle = string(freq[oddIdx] % 2, char('A' + oddIdx));

    cout << firstHalf << middle << secondHalf << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T; // uncomment if multiple test cases
    while (T--) solution();
    return 0;
}
