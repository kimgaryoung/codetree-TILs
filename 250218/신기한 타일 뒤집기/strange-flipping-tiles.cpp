#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    int n;
    cin>>n; 

    int x;
    char c;

    

   char arr[200001]={'G'};
   int a[100000];
   int B[100000];
   
    int cur=0;

    for(int i=0; i<n; i++)
    {
        cin>>x>>c;


        if(c=='R')
        {
            a[i]=cur+10000;
            B[i]=cur+x+10000;
            for(int j=a[i]; j<B[i]; j++)
            {
                arr[j]='B';

                //cout<<"arr : j"<<arr[j]<<":"<<j<<"\n";
            }

              
            cur=cur+x;
            
            

        }
        else
        {

            
            a[i]=cur+10000-1;
            B[i]=cur+10000-x-1;
            for(int j=a[i]; j>B[i]; j--)
            {
                arr[j]='W';
                //cout<<"arr : j"<<arr[j]<<":"<<j<<"\n";
            }

            cur=cur-x;

        }


      
    }

    int  b=0,w=0;

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