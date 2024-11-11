#include <iostream>
using namespace std;

int N;
int a[200];

void func(int *a, int n)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]<0)
        {
            a[i]=a[i]*(-1);
        }
        else
        {
            a[i]=a[i]*1;
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    
    cin>>N;

    for(int i=0; i<N; i++)
    {
        cin>>a[i];
    }

    func(a, N);

    for(int j=0; j<N; j++)
    {
        cout<<a[j]<<" ";
    }

    return 0;
}