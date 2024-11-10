#include <iostream>
using namespace std;

static int y,m,d;
bool year(int y)
{
    if(y%4==0)
    {
        if(y%100==0 && y%400==0)
        {
            return 1;
        }
        else if(y%100==0 &&  y%400!=0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

void mou31(int y, int m, int d)
{
    if(m==12 || m==1)
    {
        cout<<"Winter";
    }
    else if(m==5)
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
    else{
        cout<<"-1";
    }
}

void mou30(int y, int m, int d)
{
    if(m==3 ||m==4)
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
    else{
        cout<<"-1";
    }
}

int main() {
    
    // 여기에 코드를 작성해주세요.
    
    cin>>y>>m>>d;

    if(m==2 && year(y))
    {
        if(d<=29)
        {
            cout<<"Winter";
        }
    }
    else if(m==12||m==1||m==5||m==7||m==8||m==10)
    {
        
        mou31(y,m,d);

    }
    else
    {
        mou30(y,m,d);
    }
    
    
    return 0;
}