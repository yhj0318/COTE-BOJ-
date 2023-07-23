#include <iostream>
using namespace std;

int main()
{
	int freq[8];
	int asc = 0, des = 0;
	for (int i = 0; i < 8; i++)
	{
		cin >> freq[i];
	}
	for (int i = 0; i < 8; i++)
	{
		if (freq[i] == i + 1)
			asc++;
		if (freq[i] == 8 - i)
			des++;
	}
	if (asc == 8)
		cout << "ascending";
	else if (des == 8)
		cout << "descending";
	else
		cout << "mixed";
}