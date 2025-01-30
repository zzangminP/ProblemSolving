#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[10000000];
    int n;

    cin >> n;

    arr[1] = 0;

    if (n >= 2) {
        for (int i = 2; i <= n; i++) {
            arr[i] = arr[i - 1] + 1;
            if (i % 2 == 0) arr[i] = min(arr[i], arr[i / 2] + 1);
            if (i % 3 == 0) arr[i] = min(arr[i], arr[i / 3] + 1);
        }
        cout << arr[n];
    }

    else
    {
        cout << 0;
    }
}
