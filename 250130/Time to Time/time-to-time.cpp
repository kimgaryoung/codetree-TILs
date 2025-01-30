#include <iostream>
using namespace std;


int main() {

    int a,b,c,d;

    cin>>a>>b>>c>>d;


    int min=b,hour=a,m=0;

  while(true)
  {
    if(hour==c&&min==d)
        break;

    m++;
    min++;

    if(min==60)
    {
        hour++;
        min=0;

    }


  }


    cout<<m;


    


    // Please write your code here.
    return 0;
}