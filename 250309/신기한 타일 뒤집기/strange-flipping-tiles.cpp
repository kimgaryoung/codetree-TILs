#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int arr[100001];

    for(int i=0; i<100000; i++)
    {
        arr[i]=1;
    }

    int n,x,cur;
    cin>>n;
    char c;
    

    cur=50001;
    for(int i=1; i<=n; i++)
    {
        cin>>x>>c;

        if(c=='R')
        {
            for(int j=1; j<x; j++)
            {
                arr[cur]=arr[cur]-10;
                cur++;
            }
            
            
            
        }
        else
        {
            for(int j=1; j<x; j++)
            {
                arr[cur]=arr[cur]*0;
                cur--;
            }

           

        }
    }

    int b=0,w=0;

    for(int i=50000-n*100; i<=50000+n*100; i++)
    {
        if(arr[i]==0)
        {
            w++;
        }
        else if(arr[i]<0)
        {
            b++;
        }
    }

    cout<<b<<" "<<w;
    


    return 0;
}