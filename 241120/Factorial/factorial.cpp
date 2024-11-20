#include <iostream>
using namespace std;

int func(int k)
{
    if(k==1){return k;}
    
    return k *func(k-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    cout<<func(n);
    return 0;
}