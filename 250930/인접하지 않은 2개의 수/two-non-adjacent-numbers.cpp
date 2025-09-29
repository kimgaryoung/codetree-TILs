#include <iostream>
#include <algorithm>
#include<climits>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int arr[100]={};

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    
    int sum=INT_MIN;

    
    for(int i=0; i<n; i++)
    {
        
        for(int j=i+2; j<n; j++)
        {
            sum=max(arr[i]+arr[j],sum);
        }

    }
    cout<<sum;

    return 0;
}