#include <iostream>

using namespace std;

int main(){

int a = 0;
int* ip = &a;
int i = 0;

cout<< *ip << endl;
cout<< a <<endl;
cout << &a << endl;
cout << ip << endl;

int b[3] = {1,2,3};
cout << b << endl;
cout << &b << endl;

cout << &(*(b+0)) << endl;
cout << b[i] <<endl;
cout<< i[b]<<endl;

int c[3][2]={{1,2},{3,4},{5,6}};

cout << (c+1) << endl;
cout << (*(c+1)+1) << endl;


return 0;

}
