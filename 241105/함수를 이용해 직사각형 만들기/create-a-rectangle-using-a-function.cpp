#include <iostream>
using namespace std;
void func(int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<"1";
        }
        cout<<"\n";
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin>>a>>b;

    func(a, b);
    return 0;
}