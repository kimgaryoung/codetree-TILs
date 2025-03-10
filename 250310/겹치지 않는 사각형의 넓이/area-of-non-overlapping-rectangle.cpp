#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    // Please write your code here.

    int x1[3]={};
    int x2[3]={};
    int y1[3]={};
    int y2[3]={};

    int arr[2001][2001]={};

    for(int i=0; i<3; i++)
    {
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];

        x1[i]+=1000;
        y1[i]+=1000;
        x2[i]+=1000;
        y2[i]+=1000;


    }

    for(int m=0; m<2; m++)
    {
        for(int k=x1[m]; k<x2[m]; k++)
        {
            for(int j=y1[m]; j<y2[m]; j++)
            {
                arr[k][j]=1;
            }
        }
    }
    
    for(int i=x1[2]; i<x2[2]; i++)
    {
        for(int j=y1[2]; j<y2[2]; j++)
        {
            arr[i][j]= -1;
        }
    }

    int sum=0;

    for(int i=0; i<2001; i++)
    {
        for(int j=0; j<2001; j++)
        {
        if(arr[i][j]==1)
        {
            sum++;
        }
        }
    }


    cout<<sum;
    return 0;
}