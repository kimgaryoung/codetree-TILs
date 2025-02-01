#include <iostream>
#include<string>
using namespace std;

int main() {

    int m1,d1,m2,d2;

    cin>>m1>>d1>>m2>>d2;

    string arr_1[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
    string arr_2[7]={"Mon","Sun","Sat","Fri","Thu","Wed","Tue"};

    int m1_day=0, m2_day=0;


    int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    for(int i=0; i<m1; i++)
    {
        m1_day+=m[i];
    }

    for(int i=0; i<m2; i++)
    {
        m2_day+=m[i];
        
    }

    m1_day+=d1;
    m2_day+=d2;
    int days=0;

    
    if(m2_day>m1_day)
    {
        days=m2_day-m1_day;
        cout<<arr_1[days%7];
    }
    else if(m2_day<m1_day)
    {
        days=m1_day-m2_day;

        cout<<arr_2[days%7];
    }
    else
    {
        cout<<"Mon";
    }
    

    // Please write your code here.
    return 0;
}