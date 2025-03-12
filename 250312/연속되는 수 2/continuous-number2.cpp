#include <iostream>

using namespace std;

int main() {

    int n;
    cin>>n;

    int arr[1001]={};
   
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

        if(i==0 || arr[i]!=arr[i-1])
        {
            cnt++;
        }
    }

    cout<<cnt;

    
    // Please write your code here.
    return 0;
}