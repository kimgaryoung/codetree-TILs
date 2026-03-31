#include <iostream>
#include<bits/stdc++.h>

#define X first
#define Y second

using namespace std;

int n, m;

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};

int main() {
    cin >> n >> m;

    int board[n][m];
    int vis[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            vis[i][j]=0; // 초기화

            cin>>board[i][j];// 배열 채워뿌자

        }
    }


    stack<pair<int,int>>s;

    while(!s.empty())
    {
        pair<int,int>cur=s.top;s.pop;

        if(cur.X==n-1 && cur.Y==m-1) return 1;

        for(int i=0; i<4; i++)
        {
            int nx =cur.X + dx[i];
            int ny =cur.Y + dy[i];

            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(vis[nx][ny]==1|| board[nx][ny]!=1) continue;

            s.push({nx,ny});
            vis[nx][ny]=1;



        }

    }
   

    // Please write your code here.

    return 0;
}
