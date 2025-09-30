#include <iostream>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;

int main() {

    int n,s; 
    cin>> n >>s; 

    int arr[100]={};

    int sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }


    
    int s2=INT_MAX;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                s2=min(abs(s-(sum-(arr[i]+arr[j]))),s2);
               
            }
        }

        cout<<s2;
    

   
  


    // Please write your code here.
    return 0;
}