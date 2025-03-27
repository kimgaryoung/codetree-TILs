#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    // Please write your code here.


    int n;
    int k; 

    cin>>n>>k;

    int arr[1000];
    int cnt=0;
    int a=0;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(i!=0 &&   arr[i-1]>k && arr[i]>k )
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

    
    return 0;
}