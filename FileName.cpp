#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int x = 0, a[4];
	float y;
	for (int i = 0; i < 4; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 4; i++)
	{
		x += a[i];
	}
	y = (float)x / 4;
	cout << setprecision(4) << y;
}