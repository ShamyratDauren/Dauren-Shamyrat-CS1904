#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin >> a;
	for (int i = 0; i < a.length(); i++) {
		if (i % 2 != 0) {
			a[i] = '0';
		}
	}
	cout<<a;
	return 0;
}