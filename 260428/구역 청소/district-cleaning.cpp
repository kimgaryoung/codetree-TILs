#include <iostream>
using namespace std;

int main() {

    int a,b,c,d;

    cin>>a>>b>>c>>d;

    int arr[101];
    
    for(int i=0; i<101; i++)
    {
        arr[i]=0;

    }

    for(int i=a; i<=b; i++)
    {
        arr[i]++;

    }

    for(int i=c; i<=d; i++)
    {
        arr[i]++;

    }



    bool clean1=false;
    int cnt=0;

    for(int i=0; i<100; i++)
    {
        if(arr[i]!=0)
        {
            cnt++;
        }
         if(arr[i]==2)
        {
            clean1=true;
        }

       

    }



    if(clean1)// 겹침
    {
        if(a ==0||c ==0)
        {
            cout<<cnt;
            return 0;
        }
        cout<<cnt-1;
    }
    else
    {
        cout<<cnt-2;
    }
    // Please write your code here.
    return 0;
}