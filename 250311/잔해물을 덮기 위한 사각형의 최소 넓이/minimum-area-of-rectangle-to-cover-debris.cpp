#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    // Please write your code here.

    int x1[2]={};
    int y1[2]={};
    int x2[2]={};
    int y2[2]={};

   

    for(int i=0; i<2; i++)
    {
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
    }

    int arr[2001][2001]={};

   

    
    for(int a=x1[0]; a<x2[0]; a++ )
    {
        for(int b=y1[0]; b<y2[0]; b++)
        {
            arr[a][b]=1;
        }
    }

    for(int a=x1[1]; a<x2[1]; a++ )
    {
        for(int b=y1[1]; b<y2[1]; b++)
        {
            arr[a][b]=0;
        }
    }

    int x11=2000;
    int x22=0;
    int y11=2000;
    int y22=0;

    for(int i=0; i<2001; i++)
    {
        for(int j=0; j<2001; j++)
        {
            if(arr[i][j]==1)
            {
                x11=min(x11,i);
                x22=max(x22,i);

                y11=min(y11,j);
                y22=max(y22,j);

            }
        }
    }
   
    cout<<(x22+1-x11)*(y22+1-y11);
    return 0;
}