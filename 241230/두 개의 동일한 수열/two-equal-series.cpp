#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int A[100];
    int B[100];

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>B[i];
    }

    sort(A,A+n);
    sort(B,B+n);

    int cnt=0;
    for(int j=0; j<n; j++)
    {
        if(A[j]==B[j])
        {
            cnt++;
        }
        else
        {
            cout<<"NO";
        }
    }

    if(cnt==n)
    {
        cout<<"Yes";
    }

    return 0;
}