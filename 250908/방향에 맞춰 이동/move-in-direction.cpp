#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin>>n;

    int dx[4]={1,-1,0,0};// 동,서,남,북
    int dy[4]={0,0,-1,1};


    int d;
    char c;

    int x=0;
    int y=0;
    
    for(int i=0; i<n; i++)
    {
        cin>>c>>d;

        if(c=='N')
        {
            x+=(dx[3]*d);
            y=y+(dy[3]*d);
        }
        else if(c=='E')
        {
            x=x+(dx[0]*d);
            y+=(dy[0]*d);

        }
        else if(c=='S')
        {
            x+=(dx[2]*d);
            y+=(dy[2]*d);

        }
        else
        {
            x+=(dx[1]*d);
            y+=(dy[1]*d);
        }

    }

    cout<<x<<" "<<y;


    return 0;
}