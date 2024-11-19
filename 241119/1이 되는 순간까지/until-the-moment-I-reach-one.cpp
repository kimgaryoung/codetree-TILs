#include <iostream>
using namespace std;

int count=0;
int func(int n)
{
    
    if(n==1){return 0;}

 
    if(n%2==0)
    {
        count++;
        return func(n/2);
    }
    else
    {
        count++;
        return func(n/3);
    }
    

}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin>>N;

    func(N);
    cout<<count;
    return 0;
}