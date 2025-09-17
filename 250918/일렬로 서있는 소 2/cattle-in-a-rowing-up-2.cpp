#include <iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    int arr[100]={};

    int cnt=0;

  
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<N; i++)
    {
       
        for(int j=i+1; j<N; j++)
        {
            if(i<j && arr[i]<=arr[j])
            {
                
                for(int k=j+1; k<N; k++ )
                {
                    if(j<k)
                    {
                        //cout<<i<<j<<k<<"\n";
                  
                       if(arr[j]<=arr[k])
                       {
                            cnt++;
                       }
                    }
                    
                } 
                
            }
            else
            {
                continue;
            }
                

            }
        }
    

    cout<<cnt;

    return 0;
}