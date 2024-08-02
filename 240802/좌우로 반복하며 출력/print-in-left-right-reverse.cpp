#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    cin>>a;

  for(int i=1; i<=a; i++)
  {
    if(i%2==0)
    {
        for(int j=a; j>0; j--)
        {
            cout<<j;
        }
    }
    else if(i%2!=0)
    {
        for(int k=1;k<=a; k++)
        {
            cout<<k;

        }

    }
    cout<<"\n";
  }

    return 0;
}