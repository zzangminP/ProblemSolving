#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int count = 1;
	string s;
	getline(cin, s);
	for(int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			count++;
		}

	}
	if (s[0] == ' ')
	{
		count--;
	}
	if (s[s.length() - 1] == ' ')
	{
		count--;
	}
	cout << count;
}