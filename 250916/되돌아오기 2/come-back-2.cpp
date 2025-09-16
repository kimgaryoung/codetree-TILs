#include <iostream>

using namespace std;

int nx[100001]={};
int ny[100001]={};

const int fn = 50000;


int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main() {

    int dir=0;
    char c;

    int x=50000,y=50000; 
    int num=1;

    while(cin>>c)// 입력이 있을때 까지 수행.
    {
        
        
            if(c=='F')
            {
                num+=1;
                x=x+dx[dir];
                y=y+dy[dir];

                if (nx[fn]!=0 && ny[fn]!=0)
                {
                    cout<<num;
                    return 0;
                }


                nx[x]=num;
                ny[y]=num;

                
                 
            
               
                //cout<<"x"<<x<<"y"<<y<<"arr값"<<num<<"\n";
                
            }
            else if(c=='L')
            {
                num+=1;
                dir=(dir-1+4)%4;
                
                //cout<<"x"<<x<<"y"<<y<<"arr값"<<num<<"\n";
            }
            else if(c=='R')
            {
                num+=1;
                dir=(dir+1)%4;
                
                //cout<<"x"<<x<<"y"<<y<<"arr값"<<num<<"\n";
            }
            

        }
        
    
        
        cout<< -1;
        
    
    

    // Please write your code here.
    return 0;
}