
#include <iostream>
using namespace std;
int arr[100];

int func(int n,int j=0, int max=0)
{
    
    
    
    if(j==n){return max;}
    
    if(arr[j]>max)

    {
        max=arr[j];
    }

    
    return func(n,j+1,max);

}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin>>N;

   
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
 
    cout<<func(N);


    return 0;
}