
#include<bits/stdc++.h>

using namespace std;

#define X first
#define Y second

using namespace std;

int n, m;
int board[100][100];

int vis[100][100];

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};



int main() {
    cin >> n >> m; //행렬

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    queue<pair<int,int>>Q;

   
        vis[0][0]=1;
        Q.push({0,0});
            
     


    while(!Q.empty())
    {
        pair<int,int>cur=Q.front();Q.pop();

        for(int dir=0; dir<4; dir++)
        {
            int nx=cur.X+dx[dir];
            int ny=cur.Y+dy[dir];
        

            if(nx<0||nx>=n||ny<0||ny>=m)continue;
            if(vis[nx][ny]||board[nx][ny]!=1)continue;

            vis[nx][ny]=1;
            Q.push({nx,ny});
        }

    }

  if (vis[n - 1][m - 1] == 1) {
        cout << 1;
    } else {
        cout << 0;
    }


    // Please write your code here.

    return 0;
}
