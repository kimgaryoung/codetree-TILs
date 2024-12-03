#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    int arr[100];
    int brr[100];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        
    }

    
    for(int i=0; i<n; i++)
    {
        cin>>brr[i];
        
    }

    sort(arr,arr+n);
    sort(brr,brr+n);
    
    for(int j=0;j<n; j++)
    {
        if(arr[j]!=brr[j])
        {
            cout<<"No";
        }
    }

    cout<<"Yes";

    return 0;
}