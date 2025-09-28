#include <iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    // Please write your code here.

    int n; 
    cin>>n; 


    int arr[1000]={};

    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }


    int cnt=0;
    int sum =0;
    int h=-1;

    int an=INT_MAX;


    for (int j=0; j<n; j++) 
    {
        h++;
        sum=0;
        cnt=0;
        for(int k=0; k<n; k++)
        {
            
            if( cnt<=n  && h>=n)
            {
                sum+=arr[cnt]*k;
            }
            else
            {
                
                sum+=arr[h++]*k;
            }

           cnt++;

           //cout<<ㅓ의<<k<<"번째"    
            
        }
        h=0;
        an=min(an,sum);
        //cout<<j<<"번째 합"<<sum<<"\n";
        

        
    }

        

        
    


    cout<<an;

    return 0;
}