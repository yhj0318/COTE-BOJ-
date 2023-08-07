#include <iostream>
using namespace std;

int main(void)
{
	double count, TestScore[1000], max = 0, SumScore = 0, avg = 0;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> TestScore[i];
		if (TestScore[i] > 1000)
		{
			cout << "Test의 값이 1000 이상입니다." << endl;
			break;
		}
		if (max < TestScore[i])
		{
			max = TestScore[i];
		}
	}
	for (int i = 0; i < count; i++)
	{
		avg += (TestScore[i] / max) * 100;
	}
	avg = avg / count;
	cout << avg << endl;
	return 0;
}