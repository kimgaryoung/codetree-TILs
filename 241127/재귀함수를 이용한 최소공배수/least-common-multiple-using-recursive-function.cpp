#include <iostream>
using namespace std;
int arr[10];


int gcd(int a, int b)
{
    int tmp;

    while(b!=0)
    {
        tmp=a%b;
        a=b;
        b=tmp;

    }

    return a;
}


int lcm(int a,int b)
{
    return a*b/gcd(a,b);
}


int func(int n)
{
    
    int m=arr[0];
    for(int i=1; i<n; i++)
    {
        m=lcm(m,arr[i]);
    }
    return m;

}


int main() {
    // 여기에 코드를 작성해주세요.
    int a;

    cin>>a;

    
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
    }

    cout<<func(a);
    return 0;
}