#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int arr[2 * MX + 1];
int head = MX, tail = MX;
string command;


int front()
{
	return arr[head];
}

int back()
{
	return arr[tail - 1];
}

void push_front(int x)
{
	head--;
	arr[head] = x;
}

void push_back(int x)
{
	arr[tail] = x;
	tail++;
}

void pop_front()
{

	head++;
}

void pop_back()
{

	tail--;
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int c;
	cin >> c;
	while (c--)
	{
		cin >> command;
		if (command == "push_front")
		{
			int data;
			cin >> data;
			push_front(data);
		}
		else if (command == "push_back")
		{
			int data;
			cin >> data;
			push_back(data);
		}
		else if (command == "pop_front")
		{
			if (tail == head)
				cout << -1 << "\n";
			else
			{

				cout << front() << "\n";
				pop_front();
			}
		}
		else if (command == "pop_back")
		{
			if (tail == head)
				cout << -1 << "\n";
			else
			{

				cout << back() << "\n";
				pop_back();
			}
		}
		else if (command == "empty")
		{
			cout << (tail == head) << "\n";
		}
		else if (command == "size")
		{
			cout << tail - head << "\n";
		}
		else if (command == "front")
		{
			if (tail == head)
				cout << -1 << "\n";
			else
				cout << front() << "\n";
		}
		else
		{
			if (tail == head)
				cout << -1 << "\n";
			else
				cout << back() << "\n";
		}
	}
}