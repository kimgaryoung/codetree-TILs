#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    
    int k,index;
    int arr[1000];

    cin>>k;
    cin>>index;

    for(int i=0; i<k; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+k);

    cout<<arr[index-1];

    return 0;
}