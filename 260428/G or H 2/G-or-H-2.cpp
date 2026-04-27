#include <iostream>
//#include<map> 
#include<algorithm>
using namespace std;

int main() {

    int n; 
    cin>>n;

    //인덱스 접근 어려움
   // map<int,char>m;

   //각각은 정렬이 불편함
   //int arr[100];
   //char crr[100];

   pair<int,char>arr[101];

    

    for(int i=0; i<n; i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }

    sort(arr,arr+n);

    


   

    int max_num=0;

    int ans=0;

   
   

    for(int i=0; i<n; i++)
    {
        int cntg=0;
        int cnth=0;
        for(int j=i; j<n; j++)
        {

            if(arr[j].second=='G')
            {
                cntg++;
            }
            else
            {
                cnth++;

            }

             int len = j - i + 1;
            int dist = arr[j].first - arr[i].first;


            
            if(cntg==cnth ||cntg==j-i+1 || cnth==j-i+1)
            {
                /* 갯수가 같은 경우를 
                    if((cntg+cnth)>=max_num)
                    {
                        max_num=cntg+cnth;
                        ans=arr[j].first-arr[i].first;
                        
                        //cout<<arr[i]<<" "<<arr[j]<<" "<<"\n";
                    }

                    */
                
               ans = max(ans, dist);

                
                
                
            }

            
            

            

           
            

            

        }
    }

    cout<<ans;
    




    // Please write your code here.
    return 0;
}