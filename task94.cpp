#include <iostream>                      //94
using namespace std;

int main() {
	double sum = 0;
	int n;
	cin >> n;
	for (double i = 0; i < n; i++) {
		sum = sum + 1 / (i + 1);

	}
	cout << sum << endl;
	return 0;
}