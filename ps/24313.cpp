#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a1, a0;
	int c;
	int n;

	cin >> a1 >> a0;
	cin >> c;
	cin >> n;

	if (a1 <= c && (a1 * n + a0) <= c * n)
	{
		cout << '1';
		return 0;
	}
	else
	{
		cout << '0';
		return 0;
	}

}