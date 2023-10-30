#include <iostream>

using namespace std;

/* Computes nth Fibonacci number */
int Fibonacci(int n){
  /* Base cases */
  if (n == 0) return 0;
  if (n == 1) return 1;

  return Fibonacci(n-1) + Fibonacci(n-2);
} // end-Fibonacci 

int main(){

int a = Fibonacci(7);
cout << a;
    return 0;
}
