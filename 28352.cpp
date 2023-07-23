#include <iostream>
using namespace std;

int main()
{
	long long n, sum = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	sum = sum / (7 * 24 * 60 * 60);
	cout << sum;
}