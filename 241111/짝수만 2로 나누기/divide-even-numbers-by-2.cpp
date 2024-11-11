#include <iostream>
using namespace std;

void func(int *a,int x)
{
    
    a[x]=a[x]/2;
    
}


int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin>>N;

    int arr[100];

    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    for(int j=0; j<N; j++)
    {
        if(arr[j]%2==0)
        {
            func(arr,j);
            cout<<arr[j]<<" ";
        }
        else
        {
            cout<<arr[j]<<" ";
        }

    }
    

    return 0;
}