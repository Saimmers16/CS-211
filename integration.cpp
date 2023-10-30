#include <iostream>
using namespace std;

// FUNC is the Pointer to other functions

typedef double (*FUNC)(double);

// Integration function

double integrate(FUNC f, double a, double b) {

// Initializing necessary variables
double sum = 0.0;
double x = 1.0;

// Loop exists until it accounts for all x values possible to integrate

while(x <= b){

// f(x) is the height and 0.0001 is the length
// sum accounts for all "rectangles" possible 

sum = f(x)*(0.0001)+sum;
x+=0.0001;
}

// Remember that sum is a double and that all inputs are doubles

return sum;  
}

double line(double x){
   return x;
}

double square(double x){
   return x*x;
}

double cube(double x){
   return x*x*x;
}

int main() {

// method of integration won't result in exact numbers but close enough
// base number would need to be smaller to make it more exact

   cout << "The integral of f(x)=x between 1 and 5 is: " << integrate(line, 1, 5) << endl;     // 12
   cout << "The integral of f(x)=x^2 between 1 and 5 is: " << integrate(square, 1, 5) << endl; // 41.3333
   cout << "The integral of f(x)=x^3 between 1 and 5 is: " << integrate(cube, 1, 5) << endl;   // 156
return 0;
}
