#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int max = 0;
    int index;
    int a[9];

    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
            index = i + 1;
        }
    }
    cout << max << "\n" << index;
}
