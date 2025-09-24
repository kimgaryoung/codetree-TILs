#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    // Please write your code here.

    int n; 
    cin>>n;

    int x[2000];
    int y[2000];

    int dist[100];

    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }




    int m=INT_MAX;
    if(n==3)
    {
        cout<<abs(x[2]-x[0])+abs(y[2]-y[0]);
    }
    else
    {
       for(int i=1; i<n; i++)
       {
         for(int j=1; j<n; j++)
         {
            if(i==j){
                
                dist[i]+=abs(x[j+1]-x[j-1])+abs(y[j+1]-y[i-1]);

                

                j=j+1;
                continue;
            }
            else{
            
                dist[i]+=abs(x[j]-x[j-1])+abs(y[j]-y[j-1]);

            }

           
            
         }

         

         m=min(dist[i],m);
            
       }
    }

    cout<<m;
    

    return 0;
}