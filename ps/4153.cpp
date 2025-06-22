#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[3];

    while (true)
    {
        cin >> arr[0] >> arr[1] >> arr[2];
        
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
            break;
        sort(arr, arr + 3);

        if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2])
            cout << "right" << "\n";
        else
            cout << "wrong" << "\n";




    }

    
}
