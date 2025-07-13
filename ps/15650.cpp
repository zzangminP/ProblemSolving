#include <bits/stdc++.h>
using namespace std;
int n = 0;
int m = 0;
int arr[10] = {};



void func(int depth, int start)
{
	if (depth == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = start; i <= n; i++)
	{
		arr[depth] = i;
		func(depth + 1, i + 1);
	}



}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	func(0, 1);
}
