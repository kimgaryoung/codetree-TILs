#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n,m;
    cin>>n>>m;

    int arr[100];
    int brr[100];

    int tmp[m];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<m; i++)
    {
        cin>>brr[i];
    }

    sort(brr,brr+m);
    int cnt=0;

   
    for(int i=0; i<=n-m; i++)
    {
        for(int j=0; j<m; j++)
        {
            tmp[j]=arr[i+j];
        }
        bool TF=true;
        sort(tmp,tmp+m);

        for(int j=0; j<m; j++)
        {
            if(tmp[j]!=brr[j])
            {
                TF=false;
                break;
            }
        }

        if(TF)
        {
            cnt++;
        }

    }

    cout<<cnt;


    // Please write your code here.
    return 0;
}