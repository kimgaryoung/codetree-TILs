#include <iostream>
using namespace std;

void func(int &a, int &b)
{
    if(a<b)
    {
        a=2*a;
        b=b+25;
    }
    else
    {
        b=2*b;
        a=a+25;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;

    func(n,m);

    cout<<n<<" "<<m;


    return 0;
}