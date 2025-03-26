#include <iostream>
#include<algorithm>
using namespace std;

int main() {

    int k,n;
    cin>>n>>k;

    int arr[1000];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    int a=0;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(i>k && (arr[i]>arr[i-1]) )
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