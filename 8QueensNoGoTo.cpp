#include <iostream>

using namespace std;

void allTest(int q[], int c){
for(int i =0; i < c; i++){
	if(q[c] == q[i] && (c-i) == abs(q[c]-q[i])){
		q[c]++;
}
}
}

void print(int q[]){
// counter for # of Soln
int soln = 0;
    cout << "Solution Number: " << ++soln << endl;

        for(int i= 0; i <= 7; i++){
            cout << q[i] << "\t";
}
        cout << endl;

}

int main(){

int q[8] = {0};
int c = 0;
q[c] = 0;

while(c >= 0 ){
    c++;
    if (c == 8 ) print(q);

    q[c]= -1;
while( c >=0 ){
    q[c]++;
   if( q[c] == 8 ){
   c--;
    if(c == -1) return 0;
    q[c] = 0;
}

    // TESTS
allTest(q,c);
break;
}
}
return 0;
}


