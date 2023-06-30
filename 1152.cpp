#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string word;
	getline(cin, word);
	int count = 0;
	
	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == ' ')
		{
			count++;
		}
	}

	if (word[0] == ' ')
	{
		count--;
	}
	if (word[word.length() - 1] == ' ')
	{
		count--;
	}
	cout << count;
	return 0;
}