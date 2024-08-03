#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

     int n;
     cin>>n;

     for(int i=0; i<n; i++)
     {
        for(int j=0; j<n; j++)
        {
            if(i%2==0)
            {
              cout<<n*i+n*i*1/2+j+1<<" ";
            }
            else if(i%2!=0)
            {
                cout<<(n+1)+i+2*j<<" ";

            }
        }
        cout<<"\n";
     }

    return 0;
}