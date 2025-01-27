#include <iostream>
#include<algorithm>
using namespace std;


class point 
{
    public: 
        int x,y,num,k;

    point( int k,int num)
    {
        
        this -> num =num;
        this -> k= k;

    }
    point(){}

};

bool cmp(point p, point q)
{
    if(p.k==q.k)
    {
        return p.num<q.num;
    }else{
    
    return p.k<q.k;
    }
}

int main() {
    int n;
    cin>>n;
    point arr[1000];


    for(int i=0; i<n; i++)
    {
        int x,y;
         int k,num;
        cin>>x>>y;
      
        if(y<0 && x>=0)
        {
           y=y*(-1);
           k=x+y;
        }
        else if(x<0 && y>=0)
        {
            x=x*(-1);
            k=x+y;
        }
        else if(x<0 && y<0)
        {
            y*=(-1);
            x*=(-1);
            k=x+y;
        }
        else{
            k=x+y;
        }

        
         num=i+1;
        
        arr[i]=point(k,num);
        
    }
    
    sort(arr,arr+n,cmp);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i].num<<"\n";
    }
    // Please write your code here.
    return 0;
}