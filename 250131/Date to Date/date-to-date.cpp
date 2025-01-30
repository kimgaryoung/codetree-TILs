#include <iostream>
using namespace std;

int days(int m, int d)
{
     int day=0;

    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    for(int i=0; i<m; i++)
    {
        day+=arr[i];
    }
    day+=d;

    return day;
}


int main() {

    int m1,d1,m2,d2;

    cin>>m1>>d1>>m2>>d2;

   
    cout<<days(m2,d2)-days(m1,d1)+1;
   
    // Please write your code here.
    return 0;
}

/*
int main() {

    int m1,d1,m2,d2;

    cin>>m1>>d1>>m2>>d2;

    int day=0;

    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    while(true)
    {
        if(m1==m2 && d1==d2)
            break;

       
        d1++;
        day++;


       if(day>arr[m1])
       { 
       
            m1++;
            d1=1;
            
        }
       


    }

    cout<<day;
    // Please write your code here.
    return 0;
}
*/