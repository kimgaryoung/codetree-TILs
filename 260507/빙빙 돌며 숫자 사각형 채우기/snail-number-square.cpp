#include <iostream>

using namespace std;

int n, m;

//행x,열y=> 오른쪽으로 이동할떄  일단 열 증가 행 유지 

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};


int main() {
    cin >> n >> m;

    int arr[100][100];

    int x=0; // 현재 위치할 y
    int y=0;// 현재 위치할 x

    int dir=0;// 방향 0,1,2,3


    //초기화 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            arr[i][j]=0;
        }
    }

     arr[0][0]=1;


    //방향 전환이 0-1-2-3-0-1-이런식으로 반복적으로 이뤄져야함. dir=(dir+1)%4 방향 전환에 떠올리기 !

    for(int i=2; i<=n*m; i++)// 굳이 2중 for문을 쓸 필요가 없음. 그리고 2부터 시작하는 게 조건이 편함
    {
      
       int nx=x+dx[dir]; // 다음 위치 = 현재위치 + 방향에 따른 이동 
       int ny=y+dy[dir];
          
        if(!(nx>=0 && ny>=0 && nx<n && ny<m) || arr[nx][ny]!=0) // 기본적인 범위에서 벗어나는 경우 방향전환
        {

            dir=(dir+1)%4;//1,2,3,0

        }

        //숫자 채울 위치= 현재위치  
        x=x+dx[dir];
        y=y+dy[dir];

        arr[x][y]=i;


        
        
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<"\n";
    }



    // Please write your code here.

    return 0;
}