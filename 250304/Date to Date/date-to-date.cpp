#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    int day=0;
    while(true)
    {
        if(m1==m2 && d1==d2)
            break;

        day++;
        d1++;
        
        if(d1>arr[m1])
        {
            m1++;
            d1=1;
            
        }
        
    }

    cout<<day;

    // Please write your code here.

    return 0;
}