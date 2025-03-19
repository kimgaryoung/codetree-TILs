#include <iostream>
#include<vector>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n; 

    int arr[100001];
    vector<int>v[10]; 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int p=1; // 지금 시작 자릿수=> 1의 자리
    int m=6;

    for(int pos=0; pos<m; pos++)
    {
        for(int i=0; i<n; i++)
        {
            int d=(arr[i]/p)%10; // 특정 자릿수 비교를 위해 d에 넣기 

            v[d].push_back(arr[i]); 
        }
    

    int index =0; 
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<(int)v[i].size(); j++)
            arr[index++]=v[i][j];
    }

    p*=10;
    }


for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}    
    return 0;
}