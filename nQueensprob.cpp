#include <iostream>
#include <cmath>

using namespace std;

// Returns true if the queen in column c is ok

bool ok(int q[], int c) {

//All Tests
    for(int i = 0; i < c; i++){
        if( q[i] == q[c] || (c-i) == abs(q[c] - q[i])) return false;
        }
return true;
}

int nqueens(int n) {
int sol = 0;
int* q = new int[n];
// Start in the 1st row, 1st column
int c = 0;
q[c] = 0;

while (c >= 0) {
// Move to the next column
c++;

if ( c==n ){
sol++;
c--;}
else q[c] = -1;

while ( c >= 0 ) {

// Move to the next row
q[c]++;

// If you have passed the end of the column, backtrack
if ( q[c] == n ) {
c--;
}
// Otherwise, call the ok function. If it returns true, go back to the beginning of the outer loop.
else if ( ok(q, c) ) {
break;
}
}
}
delete[]q;
return sol;
}
                                                                                                                                                                                  
int main(){
int n = 12;
for(int i = 1; i <= n; ++i){
cout << "There are " << nqueens(i) << " solutions to the " << i<< " queens problem.\n";
}
return 0;
}


