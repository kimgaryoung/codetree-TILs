#include <iostream>
#include<algorithm>
using namespace std;


int main() {
    // Please write your code here.

    int a[100];
    int b[100];

    int n,k;
    cin>>n>>k;
    for(int i=1; i<=k; i++)
    {
        cin>>a[i]>>b[i];
    }

    int arr[n+1]={0};
    
    for(int j=1; j<=k; j++)
    {
        for(int i=a[j]; i<=b[j]; i++)
        {
            arr[i]++;
        }
    }

    int m=0;

    for(int i=0; i<=n; i++)
    {
        m=max(m,arr[i]);
    }

    cout<<m;

    return 0;
}