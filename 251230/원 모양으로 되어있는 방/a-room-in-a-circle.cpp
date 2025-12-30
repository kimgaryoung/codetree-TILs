#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    // Please write your code here.

    int n; 
    cin>>n; 

    int arr[n]; 


    for(int i=0; i<n; i++)
    {
        cin>>arr[i]; 
        //cout<<arr[i]<<",";
        

    }

    
    int sum=0;

    //int min_v=100;
    int min_v=numeric_limits<int>::max();
    //cout<<min_v;
    int m=0;

    for(int i=0; i<n; i++)
    {
        sum=0;

        m=i;
        
        
        for(int j=0; j<n; j++)
        {
            
            if(m>=n)
            {
                m=0;
               
            }

            sum=sum+(arr[m]*(j));
            m++;

        }

        min_v = min(min_v,sum);
        //cout<< sum<<"\n";



        
    }


    cout<< min_v;


    return 0;
}