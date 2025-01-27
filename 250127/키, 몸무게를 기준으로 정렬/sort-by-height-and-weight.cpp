#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

class C{

public: 

    string name;
    int  h,w;

    C(string name, int h, int w)
    {
        this -> name =name;
        this -> h =h;
        this -> w =w;

    }

    C(){}

};

bool cmp(C a, C b)
{
    if(a.h==b.h)
    {
        return a.w>b.w;
    }
    else 
    {
        return a.h<b.h;
    }
}

int main() {
    // Please write your code here.

     int n;
     cin>>n;
     C crr[10];

     for (int i=0; i<n; i++)
     {
        string name;
        int w,h;

        cin>>name>>h>>w;

        crr[i]=C(name, h,w);
     }


    sort(crr,crr+n,cmp);

    for(int i=0; i<n; i++)
    {
        cout<<crr[i].name<<" "<<crr[i].h<<" "<<crr[i].w<<"\n";
    }
    
    return 0;
}