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

   float m=(arr[0]+arr[n-1])/2;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=m)
        {
            cout<<arr[i]<<" ";
        }
    }

    





    return 0;
}