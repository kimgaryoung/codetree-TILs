#include <iostream>
using namespace std;

int N,T,R,C;
char D;
int dir;

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int Input()
{
    
        if(D=='U')
        {
          return 0;
        }
        else if(D=='D')
        {
            return  2;
        }
        else if(D=='R' )
        {
            return 1;
        }
        else if(D=='L')
        {
            return 3;
        }
    

}




int main() {
    // Please write your code here.

    cin>>N>>T; 

    cin>>R>>C>>D;

    int x,y;
    x=R;
    y=C;

    
    

    int cnt=0;
    int nx=x,ny=y;

    int cor=0;

    dir=Input();// 입력에 따라 함수 호출 

    while(cnt<T)
    {

        //out<<" "<<nx<<" "<<ny<<"\n";
        if(ny>=1 && ny<=N)
        {
            ny =y+dy[dir];
            
        }
        else
        {
            if(dir==3)
            {
                ny++;
                dir=1;
            }
            else
            {
                ny--;
                dir=3;
            }
            cnt++;
            cor=1;
            
        }

        //cout<<" "<<nx<<" "<<ny<<"\n";

        if (nx>=1 && nx<=N)
        {
            nx=x+dx[dir];

        }
        else
        {
            
            if(dir==0)
            {
                nx--;
                dir=2;
            }
            else
            {
                nx++;
                dir=0;
            }

            if(cor=1)
            { 
                cor=0;
            }
            else
            {
                cnt++;
            }
            
            
        }
        cnt++;

       


    }

    cout<<nx<<" "<<ny;
    





    return 0;
}