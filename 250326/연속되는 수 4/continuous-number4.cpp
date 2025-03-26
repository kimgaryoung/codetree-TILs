#include <iostream>
#include<algorithm>
using namespace std;

int main() {

    int n;
    cin>>n; 

    int cnt=0;
    int a=0;

    int arr[1000];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(i>=1 && (arr[i]>arr[i-1]))
        {
            cnt++;
        }
        else 
        {
            cnt=1;
        }
        a=max(a,cnt);
    }

    cout<<a;
    // Please write your code here.
    return 0;
}