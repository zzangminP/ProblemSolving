#include <bits/stdc++.h>
using namespace std;

int puzzle(int n, int r, int c)
{
    if (n == 0)
    {
        return n;
    }

    int side = 1 << (n - 1);
    
    
    // r�� c�� ��� �簢���� �����ϴ��� �Ǵ� 
    // 1, 2, 3, 4��и�����.... -> �׸��� �ٽ� ��ͷ� ����

    
    
    if (r < side && c < side) return puzzle(n - 1, r, c);
    if (r < side && c >= side) return side * side + puzzle(n - 1, r, c - side);
    if (r >= side && c < side) return 2 * side * side + puzzle(n - 1, r - side, c);
    if (r >= side && c >= side) return 3 * side * side + puzzle(n - 1, r - side, c - side);

    

    
    //
    ///
    /// 
    /// n -> 2^n - 1
    /// r : ��
    /// c : ��
    /// 
    /// (0���� count) 
    /// 2, 3, 1 -> �Ѻ��� 2^2�� �簢������ 3��° ���� 1��° ���� �ִ� ��
    ///         -> 11
    /// 2^2 
    /// �簢���� �� ���� 2^n
    /// �� �簢���� 4��� -> ����� ������ ��� �簢���� �ִ��� -> n�� 1���� ũ��
    ///  -> �ٽ� 4���.... �ݺ�....?
    /// �� �࿡ ���� -> ?
    /// �� ���� ���� -> ?
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