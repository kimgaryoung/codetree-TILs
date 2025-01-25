#include <iostream>
#include<algorithm>
using namespace std;


class c
{
    public: 
        int h,w,num;
        
    c(int h,int w, int num)
    {
        this -> h =h; 
        this -> w =w;
        this -> num =num;
    }
    c(){};

};


bool cmp (c fir, c sec)
{
    if(fir.h==sec.h)
    {
        if(fir.w==sec.w)
        {
           return fir.num<sec.num;
        }
        else
        {
            return fir.w > sec.w;
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

        arr[i]=c(h,w,i+1);
        

    }

    sort(arr,arr+n,cmp);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i].h<<" "<<arr[i].w<<" "<<arr[i].num<<"\n";
    }
    // Please write your code here.
    return 0;
}