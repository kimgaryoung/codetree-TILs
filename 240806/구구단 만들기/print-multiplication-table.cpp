#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int a,b; 
    cin>>a>>b;

    
    
    for(int j=1; j<=9; j++)
    {   for(int i=10; i>=a;i--)
        {
            if(i<=b && i%2==0)
            {
                cout<<i<<" * "<<j<<" = "<<i*j;
                if(i>a)
                {
                cout<<" / ";
                }
            } 

            
        }
        cout<<"\n";
    }


    return 0;
}