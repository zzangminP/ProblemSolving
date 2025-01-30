#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[46];
    int n = 0;
    
    cin >> n;

    arr[0] = 0;
    arr[1] = 1;

    if (n >= 2)
    { 
        for (int i = 1; i < n; i++)
        {
            arr[i + 1] = arr[i - 1] + arr[i];
        }
        
    }
    cout << arr[n];


}
