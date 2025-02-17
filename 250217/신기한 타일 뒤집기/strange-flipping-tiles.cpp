#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    int n;
    cin>>n; 

    int x;
    char c;

    

   char arr[200001]={'G'};
   
    int cur=0;

    for(int i=0; i<n; i++)
    {
        cin>>x>>c;


        if(c=='R')
        {
          
            for(int j=cur+100000; j<cur+x+100000; j++)
            {
                arr[j]='B';
            }

              
            cur=cur+x;
            
            

        }
        else
        {


            for(int j=cur-x+100000; j<cur+100000; j++)
            {
                arr[j]='W';
            }

            cur=cur-x;

        }


      
    }

    int b=0,w=0;

    for(int i=0; i<200001; i++)
    {
        if(arr[i]=='W')
        {
            w++;
        }
        else if(arr[i]=='B')
        {
            b++;
        }
    }



    cout<<w<<" "<<b;
    return 0;
}