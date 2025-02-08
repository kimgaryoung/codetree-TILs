#include <iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

    int b;
    cin>>b;

    int arr[1000];
    int k=0;

    while(true)
    {
        if(n<b)
        {
            arr[k++]=n;
            break;
        }

        arr[k++]=n%b;
        n=n/b;
    }
    // Please write your code here.


    for(int i=k-1; i>=0; i--)
    {
        cout<<arr[i];
    }
    return 0;
}