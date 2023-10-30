#include <iostream>

using namespace std;

int allTest( int q[], int c ){
for(int i = 0; i < c; i++){
 if(q[c] == q[i] || (c-i) == abs(q[c] -q[i]) ) q[c]++;
}
return q[c];
}


void print(int q[]){

static int soln = 0;
cout << "Solution #" << ++soln << ": ";

for( int i = 0; i < 8; i++ ){
cout << q[i] << "\t";
}
cout << "\n";
}

int main(){

int q[] = {};

int c = 0;
q[c] = 0;

while(c >= 0){
//NC
c++;
if( c == 8 ) print(q);

q[c] = -1;

	while(q[c] >= -1){
//NR
q[c]++;
if( q[c] == 8 ){
//backtrack
	c--;
	if ( c== -1) return 0;
	
	q[c] = 0;
}
//Tests

else{
allTest(q,c);
}
 break;

	}	
}
}
