#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int x1,x2,y1,y2;

    int a1,b1,a2,b2;

    cin>>x1>>y2>>x2>>y2;

    cin>>a1>>b1>>a2>>b2;

    int n=0;


    if(x1>a2 ||a1>x2)
    {
        n++;

    }
    
    if(y1>b2 || b1>y2)
    {
        n++;
    }

    if(n==2)
    {
        cout<<"nonoverlapping";
    }
    else
    {
        cout<<"overlapping";
    }






    return 0;
}