#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    


    int n;
    cin>>n;

    int arr[100];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);
    int m;
    if(n%2==0)
    {
        m=n/2;
    }
    else
    {
        m=(n+1)/2;
    }
   
    for(int i=0; i<m; i++)
    {
        cout<<arr[i]<<" ";
    }

    





    return 0;
}