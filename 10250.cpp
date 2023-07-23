#include <iostream>
using namespace std;

int main()
{
	int test;
	cin >> test;
	for (int i = 0; i < test; i++)
	{
		int h, w, n;
		cin >> h >> w >> n;
		int line = (n - 1) / h;
		int floor = n - line * h;

		int select = 1 + line + 100 * floor;
		cout << select << "\n";
	}
}
