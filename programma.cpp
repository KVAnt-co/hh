#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "vvedite nomera" << '\n';

	cin >> a;
	cin >> b;
	cin >> c;

	if (a > b && c > b)
		cout << b << "menchee chislo" << '\n';

	else if (a > c && b > c)
		cout << c << "menchee chislo" << '\n';
	else
		cout << a << "menchee chislo" << '\n';
}
//nu vse po idee