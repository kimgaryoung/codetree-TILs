#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n,m;

    cin>>n>>m;

    int a[1000000];
    int b[1000000];

    int t=0;
    char d=' ';
    
    
    int pos=1; 
    for(int i=0; i<n; i++)
    {
        cin>>d>>t;

       
        if(d=='R')
        {

            int tmp=0;
            while(t--)
            {
            

                a[pos]=a[pos-1]+1;
                pos++;

            }
        }
        else
        {
            
            while(t--)
            {
            
                a[pos]=a[pos-1]-1;
                pos++;

                
            }
        }
    }

    pos=1;
    t=0;
    d=' ';
    for(int j=0; j<m; j++)
    {

        cin>>d>>t;
        
        if(d=='R')
        {

            int tmp=0;
            while(t--)
            {
        
                b[pos]=b[pos-1]+1;
                pos++;

            }
        }
        else
        {
            
            while(t--)
            {
            
                b[pos]=b[pos-1]-1;

                pos++;

                
            }
        }
    }


    int ans=-1;

    //cout<<pos;
    for(int i=1; i<pos; i++)
    {

        //cout<<a[i]<<" "<<b[i]<<"\n";
        if(a[i]==b[i] )
        {
            ans=i;
            break;
        }
        
        


    }

    cout<<ans;
    return 0;
}