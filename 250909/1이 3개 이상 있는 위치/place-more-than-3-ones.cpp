#include <iostream>
using namespace std;

int N;

bool inRange(int x, int y)
{
    return (0<=x && 0<=y && x<N && y<N);
}




int main() {
    
    cin>>N;

    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};

    int x=0,y=0;
    int arr[101][101];

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin>>arr[i][j];
        }
    }

    int cnt=0;
    int num=0;
    for(int j=0; j<N; j++){

        for(int k=0; k<N; k++)
        {

            for(int i=0; i<4; i++)
            {
                int nx=j+(dx[i]);
                int ny=k+(dy[i]);

                if(inRange(nx,ny)&& arr[nx][ny]==1)
                {
                    cnt++;
                }

            }   

            if(cnt>=3)
            {
                num++;

            }
            cnt=0;
        }

    }

    cout<<num;

    // Please write your code here.
    return 0;
}