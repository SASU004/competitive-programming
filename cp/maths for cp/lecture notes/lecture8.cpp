// euclid algo

  int gcd (int a, int b) {
      if (b == 0)
          return a;
      else
      return gcd(b, a % b);
  }

// in the recursive call,
// b goes in as a 
// a % b goes in as b 