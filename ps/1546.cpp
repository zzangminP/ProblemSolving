#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double min = 0;
    double max = 0;
    int n = 0;
    double arr[1001] = {};

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
        if (i == 0)
        {
            min = arr[i];
            max = arr[i];
        }
        else
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

    }
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (arr[i] / max) * 100.0f;
    }


    cout.precision(21);
    cout << (sum / n);






}
