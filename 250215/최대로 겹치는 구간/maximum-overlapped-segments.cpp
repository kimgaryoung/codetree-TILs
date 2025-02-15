#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    

    int n;
    cin>>n;

    int a[200];
    int b[200];

    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
        a[i]+=100;
        b[i]+=100;

       
        
    }


    int k[200];
    for(int i=0; i<200; i++)
    {
        k[i]=0;
    }

    
    int x=0;

    while(true)
    {
        if(x>n)
            break;

        for(int i=a[x]; i<b[x]; i++)
        {
            k[i]++;

            //cout<<i<<" "<<a[x]<<" "<<b[x]<<" "<<k[i]<<"\n";
           
        }
        x++;
   
    
    }
  
    sort(k,k+200);

    cout<<k[199];

    


    return 0;
}