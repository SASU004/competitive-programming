// BINARY EXPONENTIATION





#include <iostream>
using namespace std;

// Function to calculate a^b using binary exponentiation
long long power(long long a, long long b) {
    long long result = 1;
    while (b > 0) {
      if (b%2==1)
      {
        result *= a;
        b--;
       }
    else{
        a *= a;
        b /= 2;
      }
    }
    return result;
}
int main() {
    long long a, b;
    cout << "Enter base and exponent: ";
    cin >> a >> b;

    cout << a << "^" << b << " = " << power(a, b) << endl;
    return 0;
}





// MODULAR EXPONENTIATION

// take modulo of result and a at each step to prevent overflow
