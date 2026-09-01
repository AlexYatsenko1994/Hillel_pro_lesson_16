#include <iostream>

using namespace std;

int foo(int a, int b) {
	return a + b;
}

int main() {
	int x = 5;
	int y = 10;
	int result = foo(x, y);
	cout << "The result of foo(" << x << ", " << y << ") is: " << result << endl;


	return 0;
}