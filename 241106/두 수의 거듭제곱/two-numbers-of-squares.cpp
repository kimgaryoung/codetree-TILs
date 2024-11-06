#include <iostream>
using namespace std;

int poow(int a, int b)
{
    int k;
    if(b==1)
    {
        return a;
    }
    for(int i=1; i<b; i++)
    {
        k=k*a;
    }
    return k;
}

int main() {
    // 여기에 코드를 작성해주세요
    
    int n,m;
    cin>>n>>m;

    cout<<poow(n,m);

    return 0;
}