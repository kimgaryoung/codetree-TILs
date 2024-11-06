#include <iostream>
using namespace std;

bool func(int a)
{   
    if(a==3||a==6||a==9)
    {
        return 1;
        

    }
    else if(a%3==0)
    {
        return 1;
        
    }
    else{
        while(a>0)
        {
            if(a%10==3||a%10==6||a%10==9)
            {
                return 1;
                break;
            }
            
            a=a/10;
        }
    }
        
   return 0;
  
  
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>>n>>m;

    int cnt=0;
    for(int i=n; i<=m; i++)
    {
        if(func(i))
        {
            cnt++;
        }
        
    }

    cout<<cnt;

    return 0;
}