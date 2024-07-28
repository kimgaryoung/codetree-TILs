#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;
    int a=0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {   
            
            if(a==8)
            {
               a=2; 
            }
            else
            {
                a+=2;
            }
            cout<<a<<" ";
         
        }
        cout<<"\n";
    }
    return 0;
}