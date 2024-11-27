#include <iostream>
using namespace std;


int func(int n)
{
    if(n==1){return 2;}
    if(n==2){return 4;}


    return (func(n-1)*func(n-2))%100;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int N;
    cin>>N;

    

    cout<<func(N);

    
    return 0;
}