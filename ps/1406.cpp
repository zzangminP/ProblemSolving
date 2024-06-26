#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	list<char> a;
	string word;
	int cm;
	cin >> word;


	for (auto c : word)
	{
		a.push_back(c);
	}
	auto node = a.end();

	cin >> cm;
	for (int i = 0; i < cm; i++)
	{
		char p;
		cin >> p;
		if (p == 'L')
		{
			if (node != a.begin())
			{
				node--;
			}

		}
		else if (p == 'D')
		{
			if (node != a.end())
			{
				node++;
			}
		}
		else if (p == 'P')
		{
			cin >> p;
			a.insert(node, p);
		}
		else //if (p == 'B')
		{
			if (node != a.begin())
			{
				node--;
				node = a.erase(node);
			}

		}

	}
	for (auto c : a)
		cout << c;
}