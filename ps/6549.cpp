#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while (1)
    {

        int n;
        int numbers[100001] = {};
        cin >> n;
        
        if (n == 0) break;

        stack<int> towerOfBabylon;
        long long answer = 0;
        for (int i = 0; i < n; i++)
            cin >> numbers[i];


        for (int i = 0; i <= n; ++i)
        {
            int current;

            if (i == n)
                current = 0;
            else
                current = numbers[i];

            while (!towerOfBabylon.empty() && numbers[towerOfBabylon.top()] > current)
            {
                long long height = numbers[towerOfBabylon.top()];
                towerOfBabylon.pop();
                long long width = towerOfBabylon.empty() ? i : i - towerOfBabylon.top() - 1;
                answer = max(answer, height * width);
            }

            towerOfBabylon.push(i);


        }

        std::cout << answer << "\n";
    }

}
