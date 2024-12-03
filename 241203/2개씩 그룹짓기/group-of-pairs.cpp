#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    int arr[1000];
    for(int i=0; i<2*n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+2*n);

    int max=0;
    int sum=0;
    for(int j=0; j<n; j++)
    {
        sum=arr[j]+arr[2*n-j-1];
        if(max<sum)
        {
            max=sum;
        }
    }

    cout<<max;


    return 0;
}