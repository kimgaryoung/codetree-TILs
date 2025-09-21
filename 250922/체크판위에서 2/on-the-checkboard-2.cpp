#include <iostream>
#include<algorithm>

#define max_N 15


using namespace std;

char arr[max_N][max_N];
int r,c;




int main() {
    // Please write your code here.

    
    cin>>r>>c;

    
    int cnt=0;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=1; i<r; i++)
    {
        for(int j=1; j<c; j++)
        {
           for (int k=i+1; k<r-1; k++)
           {
            for(int l=j+1; l<c-1; l++)
            {
                if(arr[0][0]!=arr[i][j]
                && arr[i][j]!=arr[k][l]
                &&arr[k][l]!=arr[r-1][c-1])
                {
                    cnt++;
                }

            }
           }
        }


    }

    cout<<cnt;
    return 0;
}