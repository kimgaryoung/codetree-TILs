#include <iostream>
using namespace std;

bool func(int n)
{
    for(int j=2; j<n; j++)
    {
        if(n%j==0)
        {
            return 0;
        }
        
        
    }
    return 1;
    

}


int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;
    int sum=0;
    for(int i=a; i<=b; i++)
    {
        if(func(i))
        {
          
           sum+=i;
        }

    }

    cout<<sum;
    return 0;
}