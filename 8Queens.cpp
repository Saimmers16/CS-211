#include <iostream>

using namespace std;

int main(){

// counter for # of Soln
int soln = 0;


int b[8][8] = {0};
int r,c = -1;
b[0][0] = 1;


NC:

    c++;
    if (c == 8 ) goto print;

    r= -1;

NR:
    r++;
   if( r == 8 ) goto backtrack;
    // TESTS

    //Row TESTS
    for(int i = 0; i < c; i++){
        if( b[r][i] == 1){
            goto NR;
        }
    }

    // Up Diagonal TESTS

    for(int i = 1; (r-i) >= 0 && (c-i) >= 0; i++){
        if(b[r-i][c-i] == 1){
            goto NR;
        }
    }

 // Down Diagonal TESTS

    for(int i = 1; (r+i) < 8 && (c-i) >= 0; i++){
        if(b[r+i][c-i] == 1){
            goto NR;
        }
    }

    // IF b[r][c] passes all three tests, it is safe to place a queen

    b[r][c] =1;
    goto NC;

backtrack:

    c--;
    if(c == -1) return 0;
    r = 0;

    while(b[r][c] != 1){
        r++;
    }

    b[r][c] = 0;
    goto NR;

print:

    cout << "Solution Number: " << ++soln << endl;

    for(int R = 0; R <= 7; R++){
        for(int C = 0; C <= 7; C++){
            cout << b[R][C] << "\t";
    }
        cout << endl;
}

cout << endl;

goto backtrack;

}


