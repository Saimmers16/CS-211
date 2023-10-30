#include <iostream>
#include <cmath>

using namespace std;

// OKAY FUNCTION

bool ok(int q[], int c){
//Helper Array
static int h[8][5] = {
{-1}, 
{0,-1},
{0,-1},
{0,1,2,-1},
{0,1,3,-1},
{1,4,-1},
{2,3,4,-1},
{3,4,5,6,-1}
};

//Tests

for(int i = 0; i <= 5; i++){
   if(i != -1){
      if((q[c] - 1) == q[h[c][i]]){
      return false;
      }
   }
}

for(int i = 0; i <= 5; i++){
   if(i != -1){ 
      if((q[c] + 1) == q[h[c][i]]){
      return false;
      }
   }
}

for(int i =0; i < c; i++){
  if(q[c] == q[i]){
	return false;
     } 
}

return true;
}

//PRINT FUNCTION

void print(int q[]){
static int soln = 1;
cout << "Solution Number: " << soln++ << endl;

cout << " " << q[0] << q[1] << endl;
cout << q[2] << q[3] << q[4] << q[5] << endl;
cout << " " << q[6] << q[7] << endl;
cout << endl;
}

//MAIN FUNCTION

int main(){

int q[8] ={0};
int c = 0;
q[c] = 1;

while( c >= 0 ){
  c++; 

  if( c == 8 ){
	print(q);
	c--;
  }
  q[c] = 0;

  while( c >= 0 ){

	q[c]++;
	
	if( q[c] == 8 ){ 
	    q[c] = 0;
	    c--;
	}
	
	if( ok(q,c) == true ) break;
  }
}
return 0;
}
