#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i=1; i<4; i++)
    {
        for(int j=1; j<4; j++)
        {
            cout<<i<<" * "<<j<<" = "<<i*j;
            if(j<3)
            {
                cout<<", ";
            }
        }
        cout<<"\n";

    }

    
    return 0;
}