
//PRIME FACTOR 



#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    cout << "Prime factors of " << n << " are: ";

    for (long long i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;//divide by the prime factor until it is no longer divisible
        }
    }

    if (n > 1) cout << n;  // last remaining prime factor
}


// 315

// enter 2 
// 2 < sqrt 3156

// enters 315%2==0 
// nope 


// 3 same 
// but mod 315%3==0 yes
// then we keep dividing by 3 until it is no longer divisible
// 315/3=105   
// 105%3==0 yes
// 105/3=35
// now 35%3!=0 we move to next i=4
// 4%35!=0 move to 5
// 5%35==0 yes
// 35/5=7
// now this 7 is akso a prime number greater than sqrt(315) so we print it at last if n>1
 