#include <iostream>
using namespace std;

void func(int a, int b)
{   
    if(a==0||b==0)
    {
        cout<<0;
    }

    if(a>b)
    {
        cout<<a%b;
    }
    else if(a<b)
    {
        
        cout<<b%a;
    }
    else if(a==b)
    {
        cout<<1;
    }
    
    
} 

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;

    func(n, m);
    return 0;
}