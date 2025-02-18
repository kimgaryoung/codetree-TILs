#include <iostream>
using namespace std;

#define MAX_K 100000

int main() {
    // Please write your code here.


    int n;
    cin>>n; 

    int x;
    char c;


    // 4개 이상되는거 걸러내기 위해서 필요함. 
    int cnt_b[2*MAX_K+1];
    int cnt_w[2*MAX_K+1];

    //색 넣을 배열
    int arr[2*MAX_K+1];
   
    int cur=MAX_K;

    for(int i=0; i<n; i++)
    {
        cin>>x>>c;

        if(c=='R')
        {
           while(x--){
            arr[cur]=2;
            cnt_b[cur]++;
            if(x) cur++;
           

           }   

        }
        else
        {
            while(x--)
            {
                arr[cur]=1;
                cnt_w[cur]++;
                if(x) cur--;
                
            }

        }


      
    }


    int w=0,b=0,g=0;
    for(int i=0; i<2*MAX_K; i++)
    {
        if((cnt_b[i]>=2) && (cnt_w[i]>=2))
        {
            g++;
        }
        else if(arr[i]==1)
        {
            w++;
        }
        else if(arr[i]==2)
        {
            b++;
        }
    }

    cout<<w<<" "<<b<<" "<<g;
    return 0;
}