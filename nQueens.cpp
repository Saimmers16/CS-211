#include<iostream>
#include<cmath>
using namespace std;

// OK function to test

bool ok(int q[], int c) {
for (int i = 0; i < c; i++){
    if (q[c] == q[i] || (c - i) == abs(q[c] - q[i])) return false;
}
return true;
}

int nqueens(int n){

// Initializing number of Solutions
int sol = 0;

// Array of size n
int* q = new int[n];

int c = 0;
q[c] = 0;

while (c >= 0) {
  // Move to the next column
  c++;
  if ( c==n ){
    sol++;
    c--;
  }
  else q[c] = -1;
  while ( c >= 0 ) {

    // Move to the next row
    q[c]++;

    // If you have passed the end of the column, backtrack
    if ( q[c] == n ) {
      c--;
    }
    if( ok(q,c) == true ) break;
  }
}

// delete array
delete[]q;

return sol;
}


int main(){

int n = 8;
cout << nqueens(n);
/*
for (int i = 1; i <= n; ++i){
cout << "There are " << nqueens(i) << " solutions to the " << i << " queens problem.\n";
}
*/
return 0;
}
