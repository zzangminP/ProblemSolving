#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

char board[1002][1002];
int fire[1002][1002];
int jh[1002][1002];


// ��
queue<pair<int, int>> Q1;

// ����
queue<pair<int, int>> Q2;


int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			jh[i][j] = -1;
			fire[i][j] = -1;
		}
	}



	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 'J')
			{
				Q2.push({ i,j });
				jh[i][j] = 0;
			}
			if (board[i][j] == 'F')
			{
				Q1.push({ i,j });
				fire[i][j] = 0;
			}
		}
	}

	while (!Q1.empty())
	{
		auto cur = Q1.front(); Q1.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (fire[nx][ny] >= 0 || board[nx][ny] == '#') continue;
			fire[nx][ny] = fire[cur.X][cur.Y] + 1;
			Q1.push({ nx,ny });
		}
	}

	while (!Q2.empty())
	{
		auto cur = Q2.front(); Q2.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
			{
				cout << jh[cur.X][cur.Y] + 1;
				return 0;
			}

			if (jh[nx][ny] >= 0 || board[nx][ny] == '#') continue;
			if (fire[nx][ny] != -1 && fire[nx][ny] <= jh[cur.X][cur.Y] + 1) continue;
			jh[nx][ny] = jh[cur.X][cur.Y] + 1;
			Q2.push({ nx,ny });
		}

	}
	cout << "IMPOSSIBLE";

}
