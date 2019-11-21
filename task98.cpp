#include <iostream>                        //98
using namespace std;
int main() {
	double x = 10;
	int n; cin >> n;
	double all = x;
	int opt = -1;
	for (int i = 2; i <= n; ++i) {
		x += x * (0.1);
		all += x;
		cout << x << ' ';
		if (x >= 80 && opt == -1) {
			opt = i;
		}
	}
	cout << endl;
	cout << all << endl;

	for (int i = n + 1; i <= 1000005; ++i) {
		x += x * (0.1);
		if (x >= 80 && opt == -1)
			opt = i;
	}

	cout << opt << endl;
	return 0;
}
