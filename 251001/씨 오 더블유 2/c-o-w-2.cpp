#include <iostream>
#include<algorithm>
using namespace std;

int main() {


    int n;
    cin>>n;
    
    char arr[100];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i]; 

        //cout<<arr[i];
    }

    int cnt=0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]=='C')
        {
            //cout<<"C조건에 만족"<<"\n";
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]=='O')
                {
                    //cout<<"O조건에 맞음"<<"\n";
                    for(int k=j+1; k<n; k++)
                    {
                        if(arr[k]=='W')
                        {
                            //cout<<"W조건에 맞음"<<"\n";
                            cnt++;
                        }
                    }  
                }

            }
        }
    }

    cout<< cnt;
    // Please write your code here.
    return 0;
}