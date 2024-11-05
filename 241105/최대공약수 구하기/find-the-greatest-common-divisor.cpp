#include <iostream>
using namespace std;

void func(int a, int b)
{   
   
   


    if(a>b)
    {
        cout<<a%b;
    }
    else if(a<b)
    {
        
        cout<<b%a;
    }
    
    
    
} 

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;

    func(n, m);
    return 0;
}