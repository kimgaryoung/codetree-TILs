#include <iostream>
using namespace std;

void num(int N)
{
    int k=1;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(k>9)
            {
                k=1;
                cout<<k<<" ";
            }
            else
            {
                cout<<k<<" ";
            }
            k++;
        }
        cout<<"\n";
    }
}
int main() {
    
    int n;
    cin>>n;
    // 여기에 코드를 작성해주세요.
    num(n);
    return 0;
}