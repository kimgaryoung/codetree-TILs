#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n,a;
    cin>>n;

    a=9;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a;
            if(a==1)
            {
                a=10; 
            }
            a--;

        }
        cout<<"\n";
    }

    return 0;
}