#include <iostream>
#include<string>
using namespace std;

string func(int a)
{
    
        if(a%2==0||a%6==0)
        {
            if(((a%10)+(a-(a%10)))%5==0)
            {
                return "Yes";
            }
            else if(a%10==0)
            {
                return "No"
            }
            
        }
        else
            {
                return "No";
            }
    
}


int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin>>n;

    cout<<func(n);
    return 0;
}