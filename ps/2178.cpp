#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[102][102];
int vis[102][102];

int n, m;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0 ,-1 };

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            board[i][j] = row[j] - '0';
        }
    }

    for (int i = 0; i < n; i++) fill(vis[i], vis[i] + m, -1);

    queue<pair<int, int>> Q;
    vis[0][0] = 1;
    Q.push({ 0, 0 });

    while (!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (vis[nx][ny] >= 0 || board[nx][ny] == 0) continue;
            vis[nx][ny] = vis[cur.X][cur.Y] + 1;
            Q.push({ nx, ny });
        }
    }

    cout << vis[n - 1][m - 1] << '\n';
}