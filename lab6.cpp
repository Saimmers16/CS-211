#include <iostream>

using namespace std;

int main(){

int day = 0;
double salary = 0.0;
int multiplier = 1;

while( salary < 10000 ){

salary = multiplier*(0.01);

multiplier = 2*multiplier;

day++;
}
cout << day;
cout << endl;
cout << salary;
return 0;
}
