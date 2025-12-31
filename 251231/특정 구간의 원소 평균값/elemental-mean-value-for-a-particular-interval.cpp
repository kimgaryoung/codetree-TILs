#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n; 
    cin>>n; 
    int arr[n+1];
    

    for(int i=0; i<=n; i++)
    {
        cin>>arr[i];
    }


    int sum=0
    
    int cnt=0;

    
    for(int i=0; i<n; i++)
    {

        for(int j=i; j<n; j++)
        {
            sum=0; 
            

            for(int k=i; k<=j; k++)
            {
                sum=sum+arr[k];

            }

            double div=(double)sum/(j-i+1);

            for(int m=i; m<=j; m++)
            {
                if((double)arr[m]==div)
                {
                    cnt++;
                }
            }


            

        }
    }

    cout<<cnt;


    return 0;
}