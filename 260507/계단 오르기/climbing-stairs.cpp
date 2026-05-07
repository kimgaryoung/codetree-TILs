#include <iostream>
using namespace std;

int arr[1000];


int func(int n)
{
    arr[1]=0;
   for(int i=2; i<=4; i++)
   {
        arr[i]=1;
   }

   for(int i=5; i<=n; i++)
   {
     arr[i]=(arr[i-2]+arr[i-3])%10007;
     
   }

   return arr[n];


    

}


int main() {
    // Please write your code here.
    int n;
    cin>>n;

    cout<<func(n);
    return 0;
}