#include <iostream>
using namespace std;

void func(int n, int m)
{   int k;
    k=(n*m);

    int tmp;
    while(m>0)
    {
        int tmp=n%m;
        n=m;
        m=tmp;
        
    }
   
   cout<<k/n;


}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;

    func(a,b);
    return 0;
}