#include <iostream>
#include<algorithm>
using namespace std;

int main() {

    int n,k;
    cin>>n>>k;
    int arr[n];
    

    for(int i=0; i<n; i++)
    {
        arr[i]=0;
    }

    int a,b;

    for(int i=0; i<k; i++)
    {
        cin>>a>>b;
        for(int j=a-1; j<b; j++)
        {
            arr[j]=arr[j]+1;
        }
    }

    sort(arr,arr+n);

   cout<<arr[n-1];
    
    
    // Please write your code here.
    return 0;
}