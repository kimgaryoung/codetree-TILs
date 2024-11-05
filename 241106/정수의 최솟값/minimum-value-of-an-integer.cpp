#include <iostream>
using namespace std;

int func(int a, int b, int c)
{
    if(a>b&&b<c)
    {
        return b;
    }
    else if(a<b&&a<c)
    {
        return a;
    }
    else if(a>c&&c<b)
    {
        return c;
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
 int k,m,n;
 cin>>k>>m>>n;

 cout<<func(k,m,n);

    return 0;
}