#include <iostream>
using namespace std;

static int y,m,d;
bool year(int y)
{
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                return 1;
            }
            return 0;
        }
        return 1;
    }
   return 0;
}

void mou31(int y, int m, int d)
{
    if(m==12 || m==1)
    {
        cout<<"Winter";
    }
    else if(m==3||m==5)
    {
        cout<<"Spring";
    }
    else if(m==7 ||m==8)
    {
        cout<<"Summer";
    }
    else if(m==10)
    {
        cout<<"Fall";
    }
  
}

void mou30(int y, int m, int d)
{
    
    if(m==4)
    {
        cout<<"Spring";
    }
    else if(m==6)
    {
        cout<<"Summer";
    }
    else if(m==9||m==11)
    {
        cout<<"Fall";
    }
   
}

int main() {
    
    // 여기에 코드를 작성해주세요.
    
    cin>>y>>m>>d;

    if(m==2)
    {
        if(year(y) && d<=29)
        {
            cout<<"Winter";
        }
        else if(!year(y)&& d<=28)
        {
            cout<<"Winter";
        }
        else
        {
            cout<<"-1";
        }
    }
    else if((m==12||m==1||m==5||m==7||m==8||m==10||m==3) && d<=31 )
    {
        
        mou31(y,m,d);

    }
    else if((m==4||m==6||m==9||m==11) && d<=30)
    {
        mou30(y,m,d);
    }
    else
    {
        cout<<"-1";
    }
    
    
    return 0;
}