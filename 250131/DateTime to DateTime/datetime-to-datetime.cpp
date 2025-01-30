#include <iostream>

using namespace std;

int main() {

    int a,b,c;
    cin>>a>>b>>c;

    int d=(a*24*60+b*60+c)-(11*24*60+11*60+11);

    if(d<0)
    {
        cout<<-1;
    }
    else{
        cout<<d;
    }

    /*

    int d=11,e=11,f=11;

    int m=0;

    if(a<=11&&b<=11&&c<=11){

        if(a==11&&b==11&&c==11)
        {
           
            cout<<"0";
        }
        else{
          
            cout<<"-1";
        }
       
       
                
    }
    else{
   
    while(true)
    {
        if(d==a && e==b && f==c)
            break;

        m++;
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


    cout<<m;
    }
    // Please write your code here.
    return 0;
    */
}