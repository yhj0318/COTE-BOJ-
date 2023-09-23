#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector <string> croatia_alp = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	int cnt = 0;
	string word;
	cin >> word;
	for (int i = 0; i < croatia_alp.size(); i++)
	{
		while (true)
		{
			cnt = word.find(croatia_alp[i]);
			if (cnt == string::npos)
				break;
			word.replace(cnt, croatia_alp[i].length(), "#");
		}
	}
	cout << word.length();
}