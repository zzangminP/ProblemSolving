#include <bits/stdc++.h>
using namespace std;


const int XX = 100000;
int arr[XX];
int pos;
string command;

void push(int val)
{
	arr[pos++] = val;

}
void pop()
{
	pos--;
}

int top()
{
	return arr[pos - 1];
}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);


	int c;
	cin >> c;
	while (c--)
	{
		cin >> command;

		if (command == "push")
		{
			int a;
			cin >> a;
			push(a);
		}
		else if (command == "pop")
		{
			if (pos == 0)
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << top() << "\n";
				pop();

			}
		}
		else if (command == "top")
		{
			if (pos == 0)
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << top() << "\n";

			}
		}
		else if (command == "empty")
		{
			if (pos == 0)
			{
				cout << "1" << "\n";
			}
			else
			{
				cout << "0" << "\n";
			}
		}
		else if (command == "size")
		{
			cout << pos << "\n";
		}
	}

}

