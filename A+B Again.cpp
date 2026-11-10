
#include <iostream>
using namespace std;
int main()
{
	int n, x, y;
	cin >> n;
	while (n--) {
		cin >> x;
		y = x % 10;
		x /= 10;
		cout << x + y << endl;
	}
}