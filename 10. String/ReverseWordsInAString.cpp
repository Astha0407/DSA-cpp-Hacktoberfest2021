
#include <bits/stdc++.h>
using namespace std;

void reverseWords(string s)
{
	vector<string> temp;
	string str = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			temp.push_back(str);
			str = "";
		}

		else
			str += s[i];
	}

	temp.push_back(str);
	int i;
	for (i = temp.size() - 1; i > 0; i--)
		cout << temp[i] << " ";
	cout << temp[0] << endl;
}

int main()
{
	string s = "First Hacktober PR";
	reverseWords(s);
	return 0;
}
