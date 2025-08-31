#include <iostream>

using namespace std;

int main() {
    

    int n=0,m=0;

    int idx=0;
    int arr[50001];
    int brr[50001];

    cin>>n>>m;

    int t;
    char d;
    
    for(int i=0; i<n; i++)
    {
        cin>>t>>d;

        for(int j=0; j<t; j++)
        {
            if(d=='L')
            {
                arr[idx++]=1;
            }
            else 
            {
                arr[idx++]=-1;
            }
        

        }
    }


    idx=0;
    

    for(int i=0; i<m; i++)
    {
        cin>>t>>d;
        for(int j=0; j<t; j++)
        {
            if(d=='L')
            {
                brr[idx++]=1;
            }
            else
            {
                brr[idx++]=-1;
            }
        }
    }

    int num=0;
    for(int i=0; i<idx; i++)
    {
        if(arr[i]==brr[i])
        {
            num++;
        }
        
    }

    cout << num; 

    return 0;
}