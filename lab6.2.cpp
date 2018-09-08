#include <iostream>
using namespace std;
// Write a program with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.

int func(int a, int b){
	int sum= a+b;
	return sum;
	}
 // Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.

void funcR(int a, int b, int &t){
	t = a + b ;
	}


int main() {

	int a, b, x;
	cin>>a>>b;

	cout<<"the result is___:"<<func(a,b)<<endl;

	funcR(a,b,x);
	cout<<x;

	return 0;
	}
