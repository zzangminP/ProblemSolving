#include <bits/stdc++.h>

using namespace std;


int lineOne[50] = {};
int lineTwo[50] = {};
int lineThree[50] = {};
int n = 0;
int cnt = 0;

void func(int cur)
{
    if (cur == n)
    {
        cnt++;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (lineOne[i] || lineTwo[i+cur] || lineThree[i-cur+n-1]) continue;
        lineOne[i] = 1;
        lineTwo[i + cur] = 1;
        lineThree[i - cur + n - 1] = 1;
        func(cur+1);
        lineOne[i] = 0;
        lineTwo[i + cur] = 0;
        lineThree[i - cur + n - 1] = 0;

    }  


}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);


    cin >> n;

    func(0);
    cout << cnt;
    
}
