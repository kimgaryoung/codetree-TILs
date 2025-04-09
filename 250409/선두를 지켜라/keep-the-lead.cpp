#include <iostream>

using namespace std;

int N, M;
int v1[1000], t1[1000];
int v2[1000], t2[1000];

int main() {
    cin >> N >> M;

    int sum=0;
    for (int i = 0; i < N; i++) 
        cin >> v1[i] >> t1[i];
            

    for (int i = 0; i < M; i++) 
        cin >> v2[i] >> t2[i];

    for(int i=0; i<N; i++)
    {
        sum=sum+t1[i];
    }

    int arr[sum];
    int brr[sum];

    int pos=0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<t1[i]; j++)
        {
            arr[pos++]=v1[i];
        }

    }

    pos=0;
    for(int i=0; i<M; i++)
    {
        for(int j=0; j<t2[i]; j++)
        {
            brr[pos++]=v2[i];
        }
    }

    int cnt=0;
    
    for(int i=1; i<sum; i++)
    {

        
        if(arr[i]>brr[i] && arr[i-1]<brr[i-1])
        {
            cnt++;
            
        }
        else if(arr[i]<brr[i] && arr[i-1]>brr[i-1])
        {
            cnt++;
            
        }
        

    }
    
    cout<<cnt;
    
    // Please write your code here.

    return 0;
}