#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin>>n;

    int cnt=0;
    int c[n];
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

        if(i==0 || arr[i-1]!=arr[i])
        {
            cnt++;
        }
        c[i]=cnt;

    }

    cout<<c[n-1];
    return 0;
}