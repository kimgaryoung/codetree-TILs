#include <iostream>
using namespace std;

static int Arr[100];
static int Brr[100];
static int n1,n2;

bool func(int n)
{
    for(int k=0; k<n2; k++)
    { 
        if(Arr[k+n]==Brr[k])
            return 1;
       
    }
    return 0;

}


bool fun2()
{
    for(int i=0; i<=n1-n2; i++)
    {
        if(func(i))
        {
            return 1;

        }
    }
    return 0;
}

int main() {
    // 여기에 코드를 작성해주세요
    

    cin>>n1>>n2;

    for(int i=0; i<n1; i++)//A
    {
        cin>>Arr[i];
    }

     for(int j=0; j<n2; j++)//B
    {
        cin>>Brr[j];
    }


   if(fun2())
   {
        cout<<"Yes";
   }
   else
   {
    cout<<"No";
   }


    return 0;
}