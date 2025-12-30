#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int maxV=0;


    for(int i=0; i<n; i++)
    {
        // 고르는 첫 숫자
        for(int j=i+1; j<n; j++)
        {
            // 고르는 두번째 숫자 
            for(int k=j+1; k<n; k++)
            {
                // 고르는 세번쨰 숫자 
                bool c=false;

                if((arr[i]%10+arr[j]%10+arr[k]%10)>=10)
                {
                    c=true;
                }

                if((arr[i]%100+arr[j]%100+arr[k]%100)>=100)
                {
                    c=true;
                }
                if((arr[i]%1000+arr[j]%1000+arr[k]%1000)>=1000)
                {
                    c=true;
                }
                if((arr[i]%10000+arr[j]%10000+arr[k]%10000)>=10000)
                {
                    c=true;
                }

                if(c==false)
                {
                    int tmp=arr[i]+arr[j]+arr[k];
                    maxV=max(tmp,maxV);
                }


            }

        }
    }

    cout<<maxV;




    return 0;
}