#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char c[100];

    int cnt=0;
    
    while(cin>>c[cnt])
    {
        cnt++;
    }


    int sum=0;
    for(int i=1; i<cnt; i++ )
    {

        if(c[i]=='('&& c[i-1]=='(')
        {
            for(int j=i+2; j<cnt; j++)
            {
                if(c[j-1]==')' && c[j]==')')
                {
                    sum++;
                }
            }
        }
    }


    cout<<sum;

    return 0;
}