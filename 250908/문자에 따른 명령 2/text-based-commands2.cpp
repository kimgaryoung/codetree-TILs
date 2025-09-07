#include <iostream>
using namespace std;

int main() {

    int dir=3;

    int n=100000;
    

    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};

    int x=0,y=0;

    char c;
    for(int i=0; i<n; i++)
    {
        cin>>c;

        if(c=='R')
        {
            dir=(dir+1)%4;
            
        }
        else if(c=='L')
        {
            dir=(dir-1+4)%4;

        }
        else if(c=='F')
        {
           
            x+=dx[dir];
            y+=dy[dir];
            break;
        }
        else
        {
            break;
        }



        


        
    }

    cout<<x<<" "<<y;
    // Please write your code here.
    return 0;
}