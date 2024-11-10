#include <iostream>
using namespace std;

bool days(int m, int d)
{

    if((m==1 ||m==12 ||m==3 || m==5 || m==7 || m==8 || m==10)&& d<=31)
    {
        return true;
    }
    else if(m==2 &&d<=28)
    {
        return true;
    }
    else if((m==4|| m==6|| m==9|| m==11)&&d<=30)
    {
        return true;
    }
    return false;

}

int main() {
    // 여기에 코드를 작성해주세요.
    int M,D;

    cin>>M>>D;

    if(M<=12 && D<=31)
    {
        if(days(M,D))
        {
            cout<<"Yes";
        }
        else{
             cout<<"No";
        }
       
    }
    else 
    {
        cout<<"No";
    }
    return 0;
}