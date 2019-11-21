#include <iostream>                      //91
using namespace std;

int main() {
	double sum = 0;
	for (double i = 2; i <= 10; i++) {
		sum = sum + i / (i + 1);
		cout << i / (i + 1) << '+';
	}
	cout << '=' << sum << endl;
	return 0;
}