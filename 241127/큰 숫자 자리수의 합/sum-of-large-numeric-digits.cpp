#include <iostream>
using namespace std;

int func(long long n)
{
    if(n<10) return n;

    return func(n/10)+n%10;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b,c;

    cin>>a>>b>>c;

    
    long long num=a*b*c;

    cout<<func(num);
    return 0;
}