#include <iostream>
using namespace std;

int count=0;
int func(int n)
{
    if(n<=1)
    {
        return count;
    }
    
    
    if(n%2==0)
    {
        count++;
        func(n/2);
            
    }   
    else if(n%2!=0)
    {
        count++;
        func(3*n+1);
    }    



        
        
    
}

int main() {
    // 여기에 코드를 작성해주세요.

    int N;
    cin>>N;

    cout<<func(N);
    return 0;
}