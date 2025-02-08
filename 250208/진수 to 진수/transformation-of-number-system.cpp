#include <iostream>
#include<string>
using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;

    
    string n;
    cin>>n;

    
    int num=0;
    for(int i=0; i<(int)n.size(); i++)
    {
        num=num*a+(n[i]-'0');
        
    }


    int arr[9];
    int k=0;
    while(true)
    {
        if(num<b)
        {
            arr[k++]=num;
            break;
        }
        arr[k++]=num%b;
        num=num/b; 

    }
    

    for(int i=k-1; i>=0; i--)
    {
        cout<<arr[i];
    }
    return 0;
}