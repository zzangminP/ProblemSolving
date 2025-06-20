#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int coin = 0;
    int k = 0;

    cin >> coin >> k;
    
    vector<int> arr(coin);

    for (int i = 0; i < coin; i++)
    {
        cin >> arr[i];
    }

    coin = 0;

    for (int i = arr.size()-1; i >= 0; i--)
    {      
        coin += (k / arr[i]);
        k %= arr[i];
    }
    cout <<coin;

}
