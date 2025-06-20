#include <bits/stdc++.h>
using namespace std;



bool isPrime(int num)
{
	if (num % 2 == 0) return false;

	for (int i = 3; i * i <= num; i += 2) {
		if (num % i == 0) return false;
	}
	return true;

}


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int min = 0;
	int max = 0;

	vector<int> arr;

	cin >> min >> max;

	for (int i = min; i <= max; i++)
	{


			// 팰린드롬이라면 소수인지 검사
			if (isPrime(i))
			{
				cout << i << '\n';

			}



	}
	cout << -1;
}

bool isPalindrome(vector<int> arr, int num)
{
	string str = to_string(num);
	string rev = str;
	reverse(rev.begin(), rev.end());
	if (str == rev)
	{
		arr.push_back(num);
	}
}