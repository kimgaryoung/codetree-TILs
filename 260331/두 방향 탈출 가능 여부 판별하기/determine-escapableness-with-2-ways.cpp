#include <iostream>
#include<bits/stdc++.h>

#define X first
#define Y second

using namespace std;

int n, m;

int dx[4]={1,0};
int dy[4]={0,1};

int board[501][501];
int vis[501][501];


int main() {
    cin >> n >> m;

    
    

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            vis[i][j]=0; // 초기화

           

            cin>>board[i][j];

        }
    }


    stack<pair<int,int>>s;
    vis[0][0]=1;
    s.push({0,0});
    


    bool found =false;
    while(!s.empty())
    {
        pair<int,int>cur=s.top();
        s.pop();

        if(cur.X==n-1 && cur.Y==m-1) 
        {
            found=true;
            break;
        }

        for(int i=0; i<4; i++)
        {
            int nx =cur.X + dx[i];
            int ny =cur.Y + dy[i];

            if(nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if(vis[nx][ny]==1|| board[nx][ny]!=1) continue;

            vis[nx][ny]=1;
            s.push({nx,ny});

        }

    }

    if(found)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
   

    // Please write your code here.

    return 0;
}
