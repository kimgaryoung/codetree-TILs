#include <iostream>

using namespace std;

int main() {
    // Please write your code here.
   
   int n;
   cin>>n;

   int arr[n]={};

    int k=0;
   while(true)
   {
        if(n<2)
        {
            arr[k++]=n;
            break;
        }
        
        arr[k++]=n%2;
        n=n/2;


   }

   for(int i=k-1; i>=0; i--)
   {
    cout<<arr[i];
   }

   
    return 0;
}