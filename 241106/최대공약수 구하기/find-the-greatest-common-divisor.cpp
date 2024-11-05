#include <iostream>
using namespace std;

void func(int a, int b)
{   
    int tmp;
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    cout<<a;
    
    
    
} 

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;

   func(n, m);
    return 0;
}