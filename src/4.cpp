#include <iostream>
#include <string>
using namespace std;
int main() {
	int num1 = 0;
	cout << "Enter a number: ";
	cin >> num1;
	if (num1 % 2 == 0) {
		cout << "The number is even." << endl;
	} else {
		cout << "The number is odd." << endl;
	}
	return 0;
}