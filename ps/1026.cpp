#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);


    int a[101] = {};
    int b[101] = {};
    int c[101] = {};

    int n = 0;


    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        c[i] = b[i];
    }  

    sort(a, a+n);
    sort(c, c+n, [](int a, int b)
        {
            return a > b;
        });

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += a[i] * c[i];
    }
    cout << ans;




}
 