#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int arr[MX];
int head = 0, tail = 0;
string command;

void push(int x) {
	arr[tail] = x;
	tail++;
}


int front() {

		return arr[head];
}

void pop() {
	cout << front() << "\n";
	head++;

}



int back() {

	return arr[tail - 1];

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
			int data;
			cin >> data;
			push(data);
		}
		else if (command == "pop")
		{
			if (tail == head)
				cout << -1 << "\n";
			else
				pop();

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
			{
				cout << -1 << "\n";
			}
			else
				cout << front() << "\n";
		}
		else //if (command == "back")
		{
			if (tail == head)
				cout << -1 << "\n";
			else
				cout << back() << "\n";
		}
	}
}