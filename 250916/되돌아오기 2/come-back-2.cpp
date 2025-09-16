#include <iostream>
using namespace std;

int arr[100001][100001]={};

const int fn=50000;


int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main() {

    int dir=0;
    char c;

    int x=fn,y=fn; 
    int num=1;

    while(cin>>c)// 입력이 있을때 까지 수행.
    {
        
        
            if(c=='F')
            {
                x=x+dx[dir];
                y=y+dy[dir];

                if (arr[fn][fn]!= 0)
                {
                    break;
                }
            
                arr[x][y] = num++;
                //cout<<"x"<<x<<"y"<<y<<"arr값"<<num<<"\n";
                
            }
            else if(c=='L')
            {
                dir=(dir-1)%4;
                num++;

            }
            else if(c=='R')
            {
                dir=(dir-1+4)%4;
                num++;
            }
            

        }
        
    
        if(arr[fn][fn]!=0)
        {
            cout<<arr[fn][fn];
        }
        else
        {
            cout<< -1;
        }
    
    

    // Please write your code here.
    return 0;
}