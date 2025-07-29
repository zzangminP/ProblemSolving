#include <bits/stdc++.h>
using namespace std;

int box[102][102][102];
int dist[102][102][102];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);


    
    int m, n, h;
     

    int dx[6] = { -1,0,1,0,0,0 };
    int dy[6] = { 0,1,0,-1,0,0 };
    int dz[6] = { 0,0,0,0,1,-1 }; 

    cin >> m >> n >> h;
    queue<tuple<int, int, int>> Q;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                cin >> box[i][j][k];
                if (box[i][j][k] == 1)
                    Q.push({ i,j,k });

                if (box[i][j][k] == 0)
                    dist[i][j][k] = -1;
            }
        }
    }


    while (!Q.empty())
    {
        auto cur = Q.front(); Q.pop();
        for (int dir = 0; dir < 6; dir++)
        {
            int nz = get<0>(cur) + dz[dir];
            int ny = get<1>(cur) + dy[dir];
            int nx = get<2>(cur) + dx[dir];

            if (nz < 0 || nz >= h || ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (dist[nz][ny][nx] >= 0) continue;
            dist[nz][ny][nx] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            Q.push({ nz,ny,nx });


        }


    }
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (dist[i][j][k] == -1)
                {
                    cout << -1;
                    return 0;
                }
                ans = max(ans, dist[i][j][k]);
            }
        }

    }


    cout << ans;
}
