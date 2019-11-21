#include <iostream>                   //88
using namespace std;

int main() {
	int sum = 1;
	for (int i = 5; i <= 13; i++) {
		sum *= i;
	}
	cout << sum << endl;
	return 0;
}