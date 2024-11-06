#include <iostream>
using namespace std;

bool prim(int n)
{
    if(n==1){return n;}
    for(int j=2; j<n; j++)
    {
        if(n%j==0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    
    }

   
}

bool even(int m)
{
    if(((m/10)+(m%10))%2==0)
    {
        return 1;
    }
    return 0;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b;
    cin>>a>>b;

    int cnt=0;

    for(int i=a; i<b; i++)
    {
        if(prim(i) && even(i))
        {
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}