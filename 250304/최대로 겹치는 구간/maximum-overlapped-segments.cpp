#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    // Please write your code here.

    int a[201];
    int b[201];

    int n;
    cin>>n;

    for(int i=0; i<n; i++ )
    {
        cin>>a[i]>>b[i];
        a[i]=a[i]+100;
        b[i]=b[i]+100;
    }

    int arr[201]={0};

    for(int j=0; j<n; j++)
    {
        for(int i=a[j]; i<b[j]; i++)
        {
            arr[i]++;
        }
    }


    int m=0;
    for(int i=0; i<=200; i++)
    {
        m=max(m,arr[i]);
    /*
        if(arr[i]!=0)
        {
            cout<<"i="<<i<<" "<<arr[i]<<"\n";
        }
      */ 
    }

    cout<<m;
    

    return 0;
}