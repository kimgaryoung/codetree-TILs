#include <iostream>
using namespace std;
int func(int k)
{
    if(k<=0){return 0;}

    if(k%2==0)
    {
        return k+func(k-2);
    }
    else
    {
        return k+func(k-2);
    }

}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    cout<<func(n);

    return 0;
}