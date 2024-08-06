#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;

    int i=2;
    while(i<9)
    {
        for(int j=b; j>=a; j--)
        {
            cout<<j<<" * "<<i<<" = "<<j*i;

            if(j!=a)
            {
                cout<<" / ";

            }
        }
        cout<<"\n";
        i+=2;
    }
    
    return 0;


}