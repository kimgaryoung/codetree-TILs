#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main() {


    int n,k;
    cin>>n>>k;

    // G=1, H=2

    int arr[10000]={};

    int a;
    char c;
    for(int i=0; i<n; i++)
    {
        cin>>a>>c;

        if(c=='G')
        {
            arr[a]=1;
            //cout<<a<<"=인덱스 / 값="<<arr[a]<<"\n";
        }
        else if(c=='H')
        {
            arr[a]=2;
            //cout<<a<<"a의 값은"<<arr[a]<<"\n";
        }
    }


    int val;
    int sum=INT_MIN;

    for(int i=1; i<=n-k+1; i++)
    {
        val=0;
        for(int j=i; j<=i+k; j++)
        {
            val+=arr[j];
           
            //cout<<"반복"<<j<<"\n";

        }
        //cout<<i<<"번째"<<val<<"\n";
        sum=max(val,sum);

        
    }

    cout<<sum;




    // Please write your code here.
    return 0;
}