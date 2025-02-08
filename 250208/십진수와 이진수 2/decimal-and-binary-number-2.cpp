#include <iostream>
#include<string>
using namespace std;

int main() {
    // Please write your code here.
    string n;
    cin>>n;

    int num=0;
    for(int i=0; i<(int)n.size(); i++)
    {
       num= num*2+(n[i]-'0');
    }

    num=num*17;

    

    int arr[10];

    int k=0;
    while(true)
    {
        if(num<2)
        {
            arr[k++]=num;
            break;

            
        }
        arr[k++]=num%2;
        num=num/2;

    }
    

    for(int i=k-1; i>=0; i--)
    {
        cout<<arr[i];
    }
    return 0;
}