#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int n;
    int arr[1000];
    
    cin>>n;
    for(int i=0; i<2*n; i++)
    {
        cin>>arr[i];
    }  

    sort(arr,arr+n);

    cout<<arr[0]+arr[n-1];
    return 0;
}