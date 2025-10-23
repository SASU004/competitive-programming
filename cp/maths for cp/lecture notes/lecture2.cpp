// SIEVE 

#include <bits/stdc++.h>
using namespace std;

// we start a loop from square of the prime then the square number is removed
void sieve (int n){
    vector<bool> is_prime(n+1, true);//initially assume all numbers are prime
    is_prime[0] = is_prime[1] = false;// 0 and 1 are not primes 

    for(int i=2; i*i <= n; i++){//we are bound to find a divisor before sqrt of n 
        if(is_prime[i]){//if the number is prime this takes us back top the vector as it is all true at first 
            for(int j = i*i; j <= n; j += i){//mark all multiples of i as not prime
                is_prime[j] = false;
            }
        }
    } 
}


// for example when 4 will come to is proime test it already has been marked false by 2'multiple so we skip it      