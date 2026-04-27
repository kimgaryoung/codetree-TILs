#include <iostream>
using namespace std;

int main() {

    int arr[1001];
    for(int i=0; i<1001; i++)
    {
        arr[i]=0;
    }

    int n;
    int cur=500;
    cin>>n; 

    for(int i=0; i<n; i++)// 명령어 1개
    {
        int num;
        char cmd;
        cin>> num>>cmd;

        for(int j=0; j<=num; j++)
        {
            if(cmd=='L')// 문자열이랑 문자에서 ""와 ''구분 때문에 시간 뺏김
            {
                arr[cur--]++;
                // 이렇게 하면 cur도 값이 변하나? 
            }
            else if(cmd=='R')
            {
                arr[cur++]++;

            }

        }


    }      


    int anw=0;

    for(int i=0; i<1001; i++)
    {
        if(arr[i]>=2)
        {
            anw++;
        }

    }

    cout<<anw;




    // Please write your code here.
    return 0;
}