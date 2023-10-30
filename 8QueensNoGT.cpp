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

void print(int q[], int b[][8]) {
static int numSolutions = 0;

cout << "Solution #" << ++numSolutions << ": " << "\t";
// Print the array

for(int i = 0; i < 8; i++){
cout << q[i] << "\t";
}
cout << endl;
// Print the board

for(int r = 0; r < 8; r++){
    for(int c = 0; c < 8; c++){
	cout << b[r][c] << "\t";
}
cout << "\n";
}

cout << "\n";

}

int main() {

int q[8] = {};
// Start in the 1st row, 1st column
int c = 0;
q[c] = 0;

while (c >= 0) { 
// Move to the next column
c++;

if ( c==8 ){
int b[8][8] = {};
for(int i = 0; i < 8; i++){
b[q[i]][i] = 1;
}
print(q,b);
c--;}
else q[c] = -1;

while ( c >= 0 ) {

// Move to the next row
q[c]++;

// If you have passed the end of the column, backtrack
if ( q[c] == 8 ) {
c--;
}
// Otherwise, call the ok function. If it returns true, go back to the beginning of the outer loop.
else if ( ok(q, c) ) {
break;
}
}
}

return 0;
}
