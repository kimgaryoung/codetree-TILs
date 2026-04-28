#include <iostream>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

string a;

int main() {
    cin >> a;

    int len;
    len=a.length();

    //저장할 배열
    int arr[10];

    for(int i=0; i<10; i++)
    {
        arr[i]=0;
    }

    // 전부 1인 경우
    int cnt=0;
    int all_sum=0; 
    for(int i=0;i<len; i++)
    {
        if(a[i]!='0')
        {
            cnt++;
            all_sum+=pow(2,len-i-1);
        }
    }

    if(cnt==len)
    {
        cout<<all_sum-1;
        return 0;
    }





    for(int i=0;i<len; i++)
    {
        int sum=0;
        if(a[i]=='0')
        {
            a[i]='1';
            for(int j=0; j<len; j++)
            {
                if(a[j]=='1')
                {
                    sum+=(int)pow(2,len-j-1);// 2^len-j  
                //cout<<"len-j"<<len-j-1<<"\n"; 문제 없음.
                arr[i]=sum;
                }
            }
            a[i]='0';
            //cout<<arr[i]<<"\n";
        }
       
    }


    

  

    int o=0;
    for(int i=0; i<len; i++)
    {

       o=max(arr[i],o);
    }

    cout<<o;


    

    // Please write your code here.

    return 0;
}