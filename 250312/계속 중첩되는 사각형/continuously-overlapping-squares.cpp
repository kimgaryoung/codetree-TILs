#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int x1[10]={};
    int y1[10]={};
    int x2[10]={};
    int y2[10]={};

    for(int i=1; i<=n; i++)
    {
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
        x1[i]+=100;
        y1[i]+=100;
        x2[i]+=100;
        y2[i]+=100;
    }

    int arr[201][201]={};
    for(int i=1; i<=n; i++){

        if(i%2==0){// 파랑
        for(int a=x1[i]; a<x2[i]; a++)
        {
            for(int b=y1[i]; b<y2[i]; b++)
            {
                arr[a][b]=1;
            }
        }
        }
        else
        {

            for(int c=x1[i]; c<x2[i]; c++)
            {
                for(int d=y1[i]; d<y2[i]; d++)
                {
                    arr[c][d]=-1;
                }
            }

        }

    }

    int sum=0;
    for(int i=0; i<200; i++)
    {
        for(int j=0; j<200; j++)
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