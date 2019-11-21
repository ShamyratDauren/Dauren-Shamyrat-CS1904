#include <iostream                        //99
using namespace std;

bool used[1001];

bool check(int x) {
	for (int i = 0; i <= 9; ++i)
		used[i] = false;
	while (x > 0) {
		int f = x % 10;
		if (used[f]) {
			return false;
		}
		used[f] = true;
		x /= 10;
	}
	return true;
}

int main() {
	for (int i = 1000; i <= 9999; ++i)
		if (check(i)) {
			cout << i << endl;
		}
	return 0;
}
