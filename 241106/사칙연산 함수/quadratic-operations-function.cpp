#include <iostream>
using namespace std;

int func(int a, char b, int c)
{
    
    if(b=='*')
    {
        return a*c;
    }
    else if(b=='+')
    {
        return a+c;
    }
    else if(b=='-')
    {
        return a-c;
    }
    else if (b=='/' && c!=0)
    {
        return a/c;
    }

    return false;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int a1,c1;
    char b1;

    cin>>a1>>b1>>c1;

    
    if(func(a1,b1,c1)==0)
    {
        cout<<"False";
    }
    else
    {
        cout<<a1<<" "<<b1<<" "<<c1<<" = "<<func(a1,b1,c1);
    }




    return 0;
}