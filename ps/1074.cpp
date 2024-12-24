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

    

    
    //
    ///
    /// 
    /// n -> 2^n - 1
    /// r : 행
    /// c : 열
    /// 
    /// (0부터 count) 
    /// 2, 3, 1 -> 한변이 2^2인 사각형에서 3번째 행의 1번째 열에 있는 값
    ///         -> 11
    /// 2^2 
    /// 사각형의 한 변은 2^n
    /// 각 사각형을 4등분 -> 몇번쨰 몇행이 어디 사각형에 있는지 -> n이 1보다 크면
    ///  -> 다시 4등분.... 반복....?
    /// 각 행에 도달 -> ?
    /// 각 열에 도달 -> ?
    ///
    ///
    ///



    //puzzle();
    //
    //puzzle();

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