#include <iostream>
using namespace std;
int func(int n)
{
    if(n<10){return n*n;}

    
    return func(n/10)+((n%10)*(n%10));
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin>>N;

    cout<<func(N);
    return 0;
}