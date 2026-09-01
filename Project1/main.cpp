#include <iostream>

using namespace std;

int foo(int a, int b) {
	return a + b;
}

void funct();

int main() {
	int x = 5;
	int y = 10;
	int result = foo(x, y);
	cout << "The result of foo(" << x << ", " << y << ") is: " << result << endl << endl;

	funct();

	return 0;
}

void funct() {
	cout << "this is a function for git" << endl;
}