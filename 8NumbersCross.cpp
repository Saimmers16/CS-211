#include <iostream>

using namespace std;

//Backtrack method:
bool okay(int q[], int c) {
static int a[8][5] = { // Helper Array
{-1}, // 0
{-1}, // 1
{-1}, // 2
{-1}, // 3
{-1}, // 4
{-1}, // 5
{-1}, // 6
{-1} // 7
};
//check if the number in position c has already been used
//check if numbers are consecutive
return true;
}

void print(int q[]) {
static int sol = 1;
cout << "Solution#:" << sol++ << endl;
cout << " " << q[1] << q[4] << endl;
cout << q[0] << q[2] << q[5] << q[7] << endl;
cout << " " << q[3] << q[6] << endl;
cout << endl;
}

int main(){
int q[8];
int c = 0;
q[c] = 1;//place number 1 at position 0
while (c >= 0) { // end the loop if you have no square to backtrack
c++; // Move to the next position c
// if you have passed the last position, print and backtrack
//print this solution
// backtrack to look for next sol
// Otherwise, move num to 0, which is one num smaller than 1
while (c >= 0) {
// Move to the next num
//if no num can be placed at current position c
// backtrack to previous position
// else if number is ok break and go to next position c
}
}
}
