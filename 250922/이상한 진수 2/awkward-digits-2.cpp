#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int bin;
    cin>>bin;

    int d=1;

    for(int i=0; i<10; i++)
    {
        if(bin/10>0)
        {
            d++;
            bin=bin/10;
            //cout<<"bin"<<bin<<"\n";
            
        }
        

       
    }


    //cout<<d<<"\n";

    int a=1;
    int sum=0;

    for(int i=0; i<d; i++)
    {
        
        sum=a+2*a;
        a=a*2;
        

        //cout<<a<<"\n";
    }

    cout<<a-2;

    return 0;
}