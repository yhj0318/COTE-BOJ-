#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, temp, res = 0, sum = 0;
	vector<int> time;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		time.push_back(temp);
	}
	sort(time.begin(), time.end());
	for (int i = 0; i < n; i++)
	{
		sum = sum + time[i];
		res += sum;
	}
	cout << res;
}