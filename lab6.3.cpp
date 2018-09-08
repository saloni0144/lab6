#include <iostream>
using namespace std;
//Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.

int func(int a, int b, int m){
	if (a>b){
	m = a;
	}
	else {
	m = b;
	}
	return m;
	}
//Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.
void funcR(int a, int b, int &c){
	if (a>b) {
	c=a;
	}
	else{
	c=b;
	}

}

int main () {
int a, b, m, c;
cin>>a>>b;

cout<<"the bigger number is:__"<<func(a,b,m)<<endl;

funcR(a,b,c);
cout<<"the bigger number is:__"<<c<<endl;

return 0;
}

