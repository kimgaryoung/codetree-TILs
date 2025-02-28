#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    int k=0;
    while(true)
    {
        if(a==c && b==d)
            break;
        

        if(b>=60)
        {
            a++;
            b=0;
        }

        b++;
        k++;
    }

    cout<<k;

    return 0;
}