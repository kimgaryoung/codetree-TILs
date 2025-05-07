#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n,m;

    cin>>n>>m;

    int v_a[n];
    int t_a[n];
    int t_sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>v_a[i]>>t_a[i];
        
        t_sum +=t_a[i];
    }

    

    int v_b[m];
    int t_b[m];

    for(int i=0; i<m; i++)
    {
        cin>>v_b[i]>>t_b[i];
    }


    int A[t_sum]={0};
    int B[t_sum]={0};

    int idx=0;
    int t=0;
    int num=0;
    for(int i=0; i<n; i++)
    {
        t=t_a[i];
        
        while(t--)
        {
            num+=v_a[i];
            A[idx++]+=num;
        
        }
        
    }


    int T=0;
    int Idx=0;
    int Num=0;
     for(int i=0; i<m; i++)
    {
        T=t_b[i];
        while(T--)
        {
            Num+=v_b[i];
            B[Idx++]+=Num;  

        }
        
    }
    int cnt=0;
    int leader=0;
    // 비교하는 과정 
    for(int i=0; i<t_sum; i++)
    {
        
     //cout<<"A배열"<<" "<<A[i]<<"\n";
     //cout<<"B배열"<<" "<<B[i]<<"\n";
        if(A[i]>B[i])
        {
            if(leader==2)
            {
                cnt++;
                //cout<<"index="<<i<<"\n";
            }
            leader=1;
            
        }
        else if(A[i]<B[i]) 
        {
            if(leader==1)
                cnt++;
                //cout<<"index="<<i<<"\n";
            leader=2;
            
        }
        
        

       
    }

    
    cout<<cnt;


    return 0;
}