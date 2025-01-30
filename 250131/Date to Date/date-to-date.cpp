#include <iostream>
using namespace std;

int main() {

    int m1,d1,m2,d2;

    cin>>m1>>d1>>m2>>d2;

    int day=1;

    while(true)
    {
        if(m1==m2 && d1==d2)
            break;

       
        d1++;
        ++day;


       if(d1>28)
       { 
        if(m1==1 ||m1==3 ||m1==5||m1==7||m1==8||m1==10||m1==12 && d1==31)
        {
             m1++;
            d1=1;
            day++;

        }
        else if(m1==4||m1==6||m1==9||m1==11 && d1==30)
        {
            m1++;
            d1=1;
            day++;
        }
        else if(m1==2 &&d1==28)
        {
            m1++;
            d1=1;
            day++;
        }
       }


    }

    cout<<day;
    // Please write your code here.
    return 0;
}