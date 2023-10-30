#include<iostream>
using namespace std;

/*
bool ok(int q[], int c) { // Finish this code
	static int mp[3][3] = { { 0,2,1 },  	 // Man#0's preferences
				{ 0,2,1 },		// Man#1's preferences
				{ 1,2,0 } };	// Man#2's preferences
						
	static int wp[3][3] = { { 2,1,0 },		// Woman#0's preferences
				{ 0,1,2 },		// Woman#1's preferences
				{ 2,0,1 } };	 // Woman#2's preferences

	
	  mp[i][j] tells you how much Man#i likes Woman#j. (0 = favorite; 2 = least favorite) 
	  wp[i][j] tells you how much Woman#i likes Man#j.

	  mp[i][q[i]] tells you how much Man#i likes his own wife. 
	  mp[i][q[c]] tells you how much Man#i likes Man#c's wife. 
	  wp[q[i]][i] tells you how much Man#i's wife likes Man#i. 
	  wp[q[i]][c] tells you how much Man#i's wife likes Man#c. 
	  If mp[i][q[c]] < mp[i][q[i]], it means that Man#i likes Man#c's wife more than his own wife
	

	//if we pass the loop, what do we return?

for(int i = 0; i < c; i++){
//if(mp[i][q[i]] < mp[i][q[c]] || wp[q[i]][i] < wp[q[c]][i] ||
 if(mp[i][q[c]] == mp[i][q[i]]) return false;
else return true;
}
return true;
}
*/

void print(int q[]) {
	static int solution = 0;
	cout << "Solution #" << ++solution << ":\nMan\tWoman\n";
	//Finish this print function
for(int i = 0; i < 3; i++){
cout << "Man " << i << " is married to" << q[i];
cout << endl;
}
}


int main() {
	//Write the main function.
int q[3]={};
int c = 0;
q[c] = 0;

while (c >= 0) {
// Move to the next column
c++;

if ( c==3 ){
print(q);
c--;}
else q[c] = -1;

while ( c >= 0 ) {

// Move to the next row
q[c]++;

// If you have passed the end of the column, backtrack
if ( q[c] == 3 ) break;

// Otherwise, call the ok function. If it returns true, go back to the beginning of the outer loop.
// else if ( ok(q, c) ) break;

	}

}

	return 0;
}
