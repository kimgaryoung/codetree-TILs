#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    // Please write your code here.

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
       
        if(i>=1 && ( arr[i]>0 && arr[i-1]>0))
        {
            cnt++;
        }
        else if(i>=1 && (arr[i]<0 && arr[i-1]<0))
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