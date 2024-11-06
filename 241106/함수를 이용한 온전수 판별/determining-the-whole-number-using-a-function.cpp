#include <iostream>
using namespace std;

int func(int n)
{
    if(n%2==0 || n%10==5 || (n%3==0 && n%9!=0))
    {
        return 0;   
    }
    return 1;
} 



int main() {
    // 여기에 코드를 작성해주세요.
    
    int a,b;
    cin>>a>>b;
    

    int cnt=0;
    for(int i=a; i<=b; i++)
    {
       if(func(i))
       {
         cnt++;
       }
    }
   
    cout<<cnt;
    return 0;
}