#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int tmp=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                tmp=arr[j];
                arr[j]=arr[i];
                arr[i]=tmp;
                
            }
        }
    }

    
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }



    return 0;
}