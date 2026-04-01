#include <iostream>
using namespace std;

int arr[11];
int n;

//최대 공약수
using LL= long long;
LL gcd(LL a, LL b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

// 최소 공배수
LL lcm(LL a, LL b)
{
    if(a ==0 || b==0)return 0;
    return (a/gcd(a,b)*b);
}

LL func(int idx)
{
    if(idx==n-1)
    {
        return arr[idx];
    }

    return lcm(arr[idx],func(idx+1));

}


int main() {

    

    
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }


    cout<<func(0);
    // Please write your code here.
    return 0;
}