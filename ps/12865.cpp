#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    int k = 0;

    cin >> n >> k;

    pair<int, int> bag[101];
    int dp[100001] = {};

    for (int i = 0; i < n; i++)
    {
        cin >> bag[i].first >> bag[i].second;

        int weight = bag[i].first;
        int value = bag[i].second;



        for (int j = k; j >= weight; j--)
        {
            dp[j] = max(dp[j], dp[j - weight] + value);
        }


    }

    cout << dp[k];


}
