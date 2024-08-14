#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n;

//queue<pair<int,int>> Q;

int dirX[4] = { 1,0,-1,0 };
int dirY[4] = { 0, 1, 0, -1 };

char board[102][102];
int jrsy[102][102];
int genArr[102][102];


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
            jrsy[i][j] = 0;
            genArr[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 'R')
            {
                jrsy[i][j] = 1;
                genArr[i][j] = 1;
            }
            if (board[i][j] == 'G')
            {
                jrsy[i][j] = 1;
                genArr[i][j] = 2;
            }
            if (board[i][j] == 'B')
            {
                jrsy[i][j] = 3;
                genArr[i][j] = 3;
            }

        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //if()
            queue<pair<int, int>>Q;
            //적록?
            while (!Q.empty())
            {

                auto cur = Q.front(); Q.pop();


                for (int i = 0; i < 4; i++)
                {
                    int nx = cur.X + dirX[i];
                    int ny = cur.Y + dirY[i];


                    if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if (jrsy[nx][ny] == 0) continue;



                }








                // bfs 돌려
                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < n; j++)
                    {


                    }
                }



            }
        }
    }


    
    
    

    


    
    
    
    
    

    
    

}
