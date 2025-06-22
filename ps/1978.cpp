#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[101] = {};
    int n = 0;

    int count = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        if (num < 2) continue;

        bool isPrime = true;
        for (int j = 2; j * j <= num; j++)
        {
            if (num % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime) count++;
    }


    cout << count;



}
