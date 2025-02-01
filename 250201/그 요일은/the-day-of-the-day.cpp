#include <iostream>
#include<string>
using namespace std;

int main() {
    // Please write your code here.

    int m1,m2,d2,d1;

    cin>>m1>>d1>>m2>>d2;

    string s;

    cin>>s;

    string arr[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

    int num=0;
    for(int i=0; i<7; i++)
    {
        if(arr[i]==s)
        {
            num=i;
        }
    }

    d1=d1+num+1;

 

   int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};


    int d1_day=0,d2_day=0;
    for(int i=0; i<m1; i++)
    {
        d1_day+=a[i];
    }

    d1_day+=d1;
    for(int i=0; i<m2; i++)
    {
        d2_day+=a[i];
    }
    d2_day+=d2;

    


    int k=1;
    while(true)
    {
        if(d1_day>=d2_day)
            break;

        d1_day+=7;
        k++;
    }


    cout<<k;

    return 0;
}