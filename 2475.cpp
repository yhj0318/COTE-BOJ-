#include <iostream>
using namespace std;

int main()
{
	int number[5], sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> number[i];
		sum += number[i] * number[i];
	}
	cout << sum % 10;
}