#include <iostream>
using namespace std;

int N;
int num=0;

int arr[1001][1001]={};





int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};




int main() {
    // Please write your code here.

    cin>>N;
    int m;
    char c;

    int nx,ny;

   
    int num=1;
   
    

    int x=500,y=500;

    for(int i=0; i<N; i++)
    {
        
        cin>>c>>m;

        if(arr[500][500]==0){
        if(c=='N' )
        {
            for(int i=0; i<m; i++)
            {
                x=x+dx[0];
                y=y+dy[0];
                arr[x][y]=num++;

               
            }
        }
        else if (c=='S' )
        {
            for(int i=0; i<m; i++)
            {
                x=x+dx[2];
                y=y+dy[2];
                arr[x][y]=num++;

            }
        }
        else if(c=='W')
        {
            for(int i=0; i<m; i++)
            {
                x=x+dx[3];
                y=y+dy[3];
                arr[x][y]=num++;

            }
        }
        else 
        {
            for(int i=0; i<m; i++)
            {
                x=x+dx[1];
                y=y+dy[1];
                arr[x][y]=num++;
            }

        }
        }
        else 
        {
            
            break;
        }

       
        

        
    }

    if (arr[500][500]!=0)
    {
        cout<<arr[500][500];
    }
    else 
    {
        cout<<-1;
    }
  



    
    return 0;
}