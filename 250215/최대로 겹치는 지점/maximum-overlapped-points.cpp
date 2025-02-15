#include <iostream>
#include<algorithm>
using namespace std;

int main() {


    int n; 
    cin>>n;
    
    int a[100];
    int b[100];
    
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }

    int k[100];
    for(int i=0; i<100; i++)
    {
        k[i]=0;
    }

    int x=0;

    while(true)
    {
        if(x>n)
        break;

        for(int i=a[x]; i<=b[x]; i++)
        {
            k[i]++;
        }

        x++;
    }

    sort(k, k+100);

    cout<<k[99];


    // Please write your code here.
    return 0;
}