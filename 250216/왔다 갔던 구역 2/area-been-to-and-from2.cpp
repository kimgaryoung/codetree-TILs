#include <iostream>
using namespace std;

int main() {
    int n; 
    cin>>n; 

    int a[1000];
    int b[1000];

    int cur=0;

    int arr[2001]={0};

    for(int i=0; i<n; i++)
    {
        int x;
        char c;

        cin>>x>>c;
        
        

        if(c=='R')
        {
           a[i]=cur;
           b[i]=cur+x;

           cur=cur+x;
            
            
        }
        else if(c=='L')
        {  
            a[i]=cur;
            b[i]=cur-x;

           cur=cur-x;

           
        } 

            a[i]=a[i]+1000;
            b[i]=b[i]+1000;

        // 디버깅 출력
        cout << "i=" << i << ", x=" << x << ", c=" << c << ", cur=" << cur << ", a[i]=" << a[i] << ", b[i]=" << b[i] << endl;
    }




    for(int i=0; i<n; i++)
    {   
       if(a[i]<b[i])
       {
            for(int j=a[i]; j<b[i]; j++)
            {
                arr[j]++;

            }
       }
        else
        {
            for(int j=a[i]; j>b[i]; j--)
            {
                arr[j]++;

            }
        }
        

    }


  

    int count=0; 
    for(int i=0; i<2001; i++)
    {
        if(arr[i]>=2)
        {
            count++;

           
        }
    }
    
    cout<< count; 
    
    // Please write your code here.
    return 0;
}
