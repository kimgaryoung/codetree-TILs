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

    int max=0;
    for(int i=1; i<n; i++)
    {
        if(c[i]>c[i-1])
        {
            max=c[i];
        }
        else
        {
            max=c[i-1];
        }
    }

    cout<<max;
    return 0;
}