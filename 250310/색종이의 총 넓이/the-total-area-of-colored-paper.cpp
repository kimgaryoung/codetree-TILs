#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n;
    cin>>n;
    int x[100]={};
    int y[100]={};



    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];

        x[i]+=100;
        y[i]+=100;
    
    }

    int arr[201][201]={};

    for(int i=0; i<n; i++)
    {
        for(int k=x[i]; k<8+x[i]; k++)
        {
            for(int j=y[i]; j<8+y[i]; j++)
            {
                    arr[k][j]=1;
            }
        }
    }

    int sum=0;
    for(int i=0; i<201; i++)
    {
        for(int j=0; j<201; j++)
        {
            
            if(arr[i][j]==1){
                 sum++;
            }
        }
    }

    cout<<sum;
    return 0;
}