#include <iostream>
using namespace std;
int n,m;
int arr[1001];
int brr[1001];



int main() {
     
     cin>>n>>m;

     int v,t;

     int idx=1; 
     int sum=0;
     
     arr[0]=0;
     brr[0]=0;

     for (int i=0; i<n; i++)
     {
        
        cin>>v>>t;
        for(int j=0; j<t; j++)
        {
            arr[idx++]=arr[idx-1]+v;

           
        }
     }

/*
    for(int i=0; i<idx; i++)
    {
        cout<<"arr="<<i<<"="<<arr[i]<<"\n";
    }
*/



    idx=1;
    
     for (int i=0; i<m; i++)
     {
        cin>>v>>t;

        for(int j=0; j<t; j++)
        {
            brr[idx++]=brr[idx-1]+v;
        }
     }
/*

        for(int i=0; i<idx;i++)
        {
            cout<<"brr="<<i<<"i번째"<<brr[i]<<"\n";
        }
    */
 
    
    char win[1001];
    int idx2=0;

     for(int i=1; i<idx; i++)
     {

        if(arr[i]>brr[i])
        {
            win[idx2++]='A';
            
        }
        else if(arr[i]<brr[i])
        {
            win[idx2++]='B';
        }
        else // 같은 경우 그 전에 꺼가 동일하게 들어감.
        {
            win[idx2++]='C';
        }
     }
/*
     for(int i=0; i<idx2; i++)
     {
        cout<<i<<"번째="<<win[i]<<"\n";
     }
    */
    
    int cnt=0;
    for(int i=1; i<idx2; i++)
    {
        if(win[i]!=win[i-1])
        {
            cnt++;
        }
        else if(win[i-1]=='C'|| win[idx2-1]=='C')
        {
            cnt++;
        }
        
    }

    cout<<cnt;


    return 0;
}