#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    // Please write your code here.

    int N;
    cin>>N;
    int arr[20][20]={};

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin>>arr[i][j];
        }
    }



    int max_cnt=INT_MIN;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N-2; j++)
        {
            max_cnt=max(max_cnt, arr[i][j] +arr[i][j+1]+arr[i][j+2]);
        }
    }

    cout<<max_cnt;

    

    return 0;
}