#include <iostream>
#include<algorithm> // max 사용 
using namespace std;

int main() {
    // Please write your code here.

    int n,k;
    cin>>n>>k;

    int arr[101]={0};

    


    int v,idx;
    int m_idx=0;

    for(int i=0; i<n; i++)
    {
        cin>>v>>idx;

        arr[idx]+=v;

        m_idx =max(idx,m_idx);

    }

    int sum=0;
    int cor_a=0;
    for(int i=k; i<=m_idx-k; i++)// 중심
    {
        sum=0;
        for(int j=i-k; j<=i+k; j++) // 더할 범위 
        {
            
                sum+=arr[j];
           

        }

        cor_a=max(cor_a,sum);



    }

    cout<<cor_a;



   







    return 0;
}