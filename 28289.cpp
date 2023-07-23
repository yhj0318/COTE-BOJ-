#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int p, nt = 0, sw = 0, em = 0, ai = 0;
	cin >> p;
	vector <int> g, c, n;
	for (int i = 0; i < p; i++)
	{
		int temp1, temp2, temp3;
		cin >> temp1 >> temp2 >> temp3;
		g.push_back(temp1);
		c.push_back(temp2);
		n.push_back(temp3);
		if (g[i] == 1)
			nt++;
		if (g[i] == 2 || g[i] == 3)
		{
			if (c[i] == 1 || c[i] == 2)
				sw++;
			if (c[i] == 3)
				em++;
			if (c[i] == 4)
				ai++;
			if (c[i] != 1 && c[i] != 2 && c[i] != 3 && c[i] != 4)
				break;
		}
		if (g[i] != 1 && g[i] != 2 && g[i] != 3)
			break;
	}
	cout << sw << "\n" << em << "\n" << ai << "\n" << nt;
}