#include <iostream>

using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;


    int d=11,e=11,f=11;

    int m=0;

 
    while(true)
    {
       if(a==11&&b==11&&c==11){
                m=-1;
                break;
       }

       else if(d==a && e==b && f==c)
            break;
        
        else{


        ++m;
        f++;
        if(f==60)
        {
            e++;
            f=0;
        }
        
        if(e==24)
        {
            d++;
            e=0;
        }
        }
       
        
    }


    cout<<m;
    // Please write your code here.
    return 0;
}