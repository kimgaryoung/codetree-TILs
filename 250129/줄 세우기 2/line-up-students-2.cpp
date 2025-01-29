#include <iostream>
#include<algorithm>
using namespace std;


class line
{
    public:
        int h,w,o;

    line(int h, int w, int o)
    {
        this -> h=h;
        this -> w=w;
        this -> o=o;

    }
    line(){}
}; 

bool cmp(line a, line b)
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
    int n;
    cin>>n;

    line arr[1000];
    
    for(int i=0; i<n; i++)
    {
        int h,w,o;
        cin>>h>>w;
        o=i+1;
        arr[i]=line(h,w,o);
    }

    sort(arr,arr+n,cmp);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i].h<<" "<<arr[i].w<<" "<<arr[i].o<<"\n";
    }

    // Please write your code here.
    return 0;
}