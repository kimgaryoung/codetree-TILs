#include <iostream>
#include<algorithm>
using namespace std;


class c
{
    public: 
        int h,w;
        
    c(int h,int w)
    {
        this -> h =h; 
        this -> w =w;
    }
    c(){};

};


bool cmp (c fir, c sec)
{
    if(fir.h==sec.h)
    {
        if(fir.w==sec.w)
        {
            return 0;
        }
        else
        {
            return fir.w>sec.w;
        }
    }
    else{
        return fir.h>sec.h;
    }

}


int main() {

    int n;
    cin>>n;

    c arr[1000];

    for(int i=0; i<n; i++)
    {
        int h,w;

        cin>>h>>w;

        arr[i]=c(h,w);
        

    }

    sort(arr,arr+n,cmp);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i].h<<" "<<arr[i].w<<" "<<n-i<<"\n";
    }
    // Please write your code here.
    return 0;
}