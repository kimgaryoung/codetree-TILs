#include <iostream>
using namespace std;

int N,M;

int InRange(int nx, int ny)
{

    return(0<=nx && nx<N && 0<=ny && ny<M);
   



}

int main() {
    // Please write your code here.


    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};

   int x=0, y=0;

    cin>>N>>M;

    int arr[N][M]={};
    arr[0][0]=1;
    //cout<<arr[0][0]<<" ";

    int dir=0;


    for(int i=2; i<=N*M; i++)
    {
        int nx=x+dx[dir];
        int ny=y+dy[dir];

        

        if(!InRange(nx,ny) || arr[nx][ny]!=0)
        {
           
            dir=(dir+1)%4;

            //cout<<"dir="<<dir<<"\n";

        }

        x=x+dx[dir];
        y=y+dy[dir];

        arr[x][y]=i;

        
        
    }


    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<"\n";
    }



    return 0;
}