#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int min = 0;
    int max = 0;


    cin >> min >> max;


    vector<bool> arr(max + 1, true);
    arr[0] = arr[1] = false;

    
     for (int i = 2; i * i <= max; i++)
     {
         if (arr[i])
         {
             for (int j = i * i; j <= max; j += i)
             {
                 arr[j] = false;
             }

         }

     }

     for (int i = min; i <= max; i++)
     {
         if (arr[i])
         {
             cout << i << '\n';
         }
     }
     return 0;



}
