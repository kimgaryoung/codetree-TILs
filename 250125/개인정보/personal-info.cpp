#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

class c
{
    public: 
        string name;
        int h;
        float w;

    c(string name, int h, float  w)
    {
        this -> name =name;
        this -> h =h;
        this -> w =w;

    }
    c(){}
    



};

bool cmp_name( c a, c b)
{
    return a.name < b.name;
}

bool cmp_height(c a, c b)
{
    return a.h> b.h;
}



int main() {

    c arr[5];

    for(int i=0; i<5; i++)
    {
        string name;
        int h;
        float w;

        cin>>name>>h>>w;

        arr[i]=c(name, h, w);
        
    }

    sort(arr, arr+5, cmp_name);
    cout<<"name"<<"\n";

    for(int i=0; i<5; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].h<<" "<<arr[i].w<<"\n";
    }

    sort(arr, arr+5, cmp_height);

    cout<<"\n"<<"height"<<"\n";

    for(int i=0; i<5; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].h<<" "<<arr[i].w<<"\n";
    }

    // Please write your code here.
    return 0;
}