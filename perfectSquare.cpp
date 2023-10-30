#include <iostream>

using namespace std;

int main(){

for(int x = 0; x > 0; x++){
//this for loop will go through all positive integers


  if( (x*x)%2 == 1 && ((x*x)/10)%2 == 1){
/*
the if statement will check if the last digit of a square is odd and if the  second to last digit is odd
*/
  cout << x;
}
}
 return 0;
}
