#include <iostream>
using namespace std;

int func(int a)
{
    int sum=0;
    for(int i=1; i<=a; i++)
    {
        sum+=i;
    }

    sum=sum/10;
    return sum;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    cin>>m;

    cout<<func(m);

    return 0;
}