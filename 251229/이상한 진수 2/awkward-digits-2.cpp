#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std; 

int main() {


    int arr[10];
    int bin;
    
    cin>>bin;

     //자릿수 미정 -> 자릿수 배열에 넣기 
    
    int num=9;

    for(int i=9; i>=0; i--)
    {
        if(bin/10!=0)
        {
            arr[i]=bin%10;

            bin=bin/10;
            num--;

        }
        else 
        {
            arr[i]=-1;
        }
   



    }

    arr[num]=1; // 첫번째 자리는 0 안옴 (나머지때문에 0이 오니까.)
    
    //cout<<num<<"\n";
    
    int sum,m=0;
    bool c;

    for(int i=num; i<=9; i++)
    {
       sum=0;
       if(arr[i]==0)
       {

            c=false;
            arr[i]=1;
            //cout<<i<<"번째"<<arr<<"\n";
       }
       else if(arr[i]==1)
       {
          c=true;
          arr[i]=0;
       }
       
        
        for(int j=0; j<10-num; j++)// 2진수 계산 
        {
            sum+=arr[9-j]*pow(2,j);

        }


        if(c)
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=0;
        }

        

        //cout<<sum<<"\n";

        m=max(sum,m);
        
        

        
    }

    cout<<m;

   
    // Please write your code here.
    return 0;
}