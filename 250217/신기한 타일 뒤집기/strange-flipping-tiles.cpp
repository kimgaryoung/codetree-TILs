#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    int n;
    cin>>n; 

    int x;
    char c;

    

    int arr[200000]={0};
   
    int cur=0;

    for(int i=0; i<n; i++)
    {
        cin>>x>>c;


        if(c=='R')
        {
          
            for(int j=cur+100000; j<cur+x+100000; j++)
            {
                arr[j]=arr[j]+i+1;
            }

              
            cur=cur+x;
            
            

        }
        else
        {


            for(int j=cur-x+100000; j<cur+100000; j++)
            {
                arr[j]=arr[j]-(i+1);
            }

            cur=cur-x;

        }


      
    }


    int w=0,b=0;
    for(int i=0; i<200000; i++)
    {
        if(arr[i]>0)
        {
            b++;
            
        }
        else if(arr[i]<0)
        {
            w++;
            
        }

        
       
    }

    cout<<w<<" "<<b;
    return 0;
}