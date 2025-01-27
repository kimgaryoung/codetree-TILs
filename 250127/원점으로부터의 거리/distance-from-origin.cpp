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
    return p.k<q.k;
}

int main() {
    int n;
    cin>>n;
    point arr[1000];

    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
      
        if(y<0 && x>0)
        {
           y=y*(-1);
        }
        else if(x<0 && y>0)
        {
            x=x*(-1);
        }
        else if(x<0 && y<0)
        {
             y=y*(-1);
             x=x*(-1);
        }

         int k=x+y;
        
        arr[i]=point(k,i+1);
    }
    
    sort(arr,arr+n,cmp);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i].num<<"\n";
    }
    // Please write your code here.
    return 0;
}