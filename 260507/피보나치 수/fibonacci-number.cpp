#include <iostream>

using namespace std;

int N;
int arr[45];

int fibbo(int n)
{
    arr[0]=1;
    arr[1]=1;

    for(int i=2; i<n; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }

    return arr[n-1];
   
}


int main() {
    cin >> N;

    cout<<fibbo(N);

    // Please write your code here.

    return 0;
}
