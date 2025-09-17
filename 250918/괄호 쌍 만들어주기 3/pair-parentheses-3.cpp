#include <iostream>
#include<cstdlib>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    char arr[101];
    char c;

    int idx=0;
    int role=0; // 기준 

    while(cin>>c)
    {
        arr[idx]=c;
        //cout<<"idx="<<arr[idx]<<"\n"; 
        idx++;
        
    }

    //int n;
    //n=arr.size();

    int cnt=0; 

    for(int i=0; i<101; i++)
    {
        if(arr[i]=='(')
        {

            for(int j=i+1; j<100; j++)
            {
            
                
                if(arr[j]==')')
                {
                    cnt++;
                }
            
            
            }
        }
    }

    cout<<cnt;
    


    return 0;
}