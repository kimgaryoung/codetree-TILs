#include <iostream>
#include<algorithm>
using namespace std;

int main() {


    int n,k;
    cin>>n>>k;
    int arr[100]={};

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int val=0;
    int sum=0;
    
    for(int i=0; i<=n-k;i++)
    {
        val=0;
        for(int j=i; j<i+k; j++)
        {
            val+=arr[j];
            //val=max(val, arr[j]);
        }

        sum=max(sum,val);
        


    }

    cout<<sum;
    // Please write your code here.
    return 0;
}