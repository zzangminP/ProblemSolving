#include <bits/stdc++.h>


using namespace std;

int puzzle(int n, int r, int c)
{
    if (n == 0)
    {
        return n;
    }

    int side = 1 << (n - 1);
    
    
    // r과 c로 어디 사각형에 존재하는지 판단 
    // 1, 2, 3, 4사분면으로.... -> 그리고 다시 재귀로 돌림

    
    
    if (r < side && c < side) return puzzle(n - 1, r, c);
    if (r < side && c >= side) return side * side + puzzle(n - 1, r, c - side);
    if (r >= side && c < side) return 2 * side * side + puzzle(n - 1, r - side, c);
    if (r >= side && c >= side) return 3 * side * side + puzzle(n - 1, r - side, c - side);


}



int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    int r = 0, c = 0;
    int answer = 0;
    cin >> n >> r >> c;
    answer = puzzle(n, r, c);
    cout << answer;

}