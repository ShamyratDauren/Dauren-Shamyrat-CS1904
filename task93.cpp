#include <iostream>                     //93
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		int a = pow(i, 2.0);
		sum += a;
		cout << a << '+';
	}
	cout << '=' << sum << endl;
	return 0;
}