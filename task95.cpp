#include <iostream>                      //95
using namespace std;
int main() {
	int a, n, p = 1;
	cin >> a >> n;
	for (int i = 1; i <= n; i++) {
		p *= pow((a + i), 2);
	}
	cout << p;
}