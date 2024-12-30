#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int n;
    
    
    cin>>n;
    int arr[2*n];
    for(int i=0; i<2*n; i++)
    {
        cin>>arr[i];
    }  

    sort(arr,arr+2*n);



    int max=0;
    for(int j=0; j<n; j++)
    {

        int sum= arr[j]+arr[2*n-1-j];
        
        if(max < sum)
        {
            max=sum;
        }
        

        
    }

    cout<<max;

    return 0;


}