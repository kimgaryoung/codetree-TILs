#include <iostream>
using namespace std;

void star()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<10; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    star();
    return 0;
}