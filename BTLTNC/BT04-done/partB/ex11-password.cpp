//đã chạy thành công trên hackerearth: http://www.hackerearth.com/problem/algorithm/password-1/
#include <iostream>

using namespace std;

bool checkPalind(string s1, string s2)
{
	if (s1.length() != s2.length())
		return false;
	else
	{
		for (int i = 0; i < (int)s1.length(); i++)
		{
			if (s1[i] != s2[s2.length() - i - 1])
				return false;
		}
		return true;
	}
}

int main()
{
	int n; cin >> n;
	string s[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (checkPalind(s[i], s[j]))
			{
				cout << s[i].length() << " " << s[i][(int)s[i].length() / 2];
				return 0;
			}
		}
	}
}
