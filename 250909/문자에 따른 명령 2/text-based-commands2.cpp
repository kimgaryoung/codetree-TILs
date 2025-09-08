#include <iostream>
using namespace std;

int main() {

    int dir=3; // 북쪼

   
    

    int dx[4]={1,0,-1,0};
    int dy[4]={0,-1,0,1};

    int x=0,y=0;

    char c;

    
   
    for(int i=0; i<1000000; i++){

        cin>>c;

        if(c!='R'&&c!='L'&&c!='F')
        {
            break;
        }
        
        

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
            
            
        }
        c=' ';
        
    }
       


    cout<<x<<" "<<y;        
    

    
    // Please write your code here.
    return 0;
}