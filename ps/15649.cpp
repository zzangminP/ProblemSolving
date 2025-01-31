#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int last[10];

void func(int num)
{
    if (num == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i] << ' ';

        }
        cout << '\n';
    }
    for (int i = 1; i <= n; i++)
    {
        if (!last[i])
        {
            arr[num] = i;
            last[i] = 1;
            func(num + 1);
            last[i] = 0;
        }
    }


}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    func(0);
    
}
