#include <iostream>
using namespace std;


int main() {

    int a,b,c,d;

    cin>>a>>b>>c>>d;


    int min=0;

   if(b-d<0){

        min=(60+b-d)+(c-a-1)*60;

   }else
   {

        min=(b-d) +(c-a)*60;
   
   }


    cout<<min;


    


    // Please write your code here.
    return 0;
}