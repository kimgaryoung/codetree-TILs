#include <iostream>
//#include<map> 인덱스 번호를 못씀 맵으로 하면 
#include<algorithm>
using namespace std;

int main() {

    int n; 
    cin>>n;

   // map<int,char>m;

   //각각은 정렬이 불편함
   //int arr[100];
   //char crr[100];

   pair<int,char>arr[100];

    

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


            if((j-i+1)%2==0)//길이가 짝수
            {
                if(cntg==cnth )
                {
                    if((cntg+cnth)>max_num)
                    {
                        max_num=cntg+cnth;
                        ans=arr[j].first-arr[i].first;
                        
                        //cout<<arr[i]<<" "<<arr[j]<<" "<<"\n";
                    }
 

                }
                else if((cntg==n && cnth==0 )|| (cntg==0 && cnth==n))
                {
                   cout<<arr[j].first-arr[i].first;
                   return 0;


                }
                
            }

            

           
            

            

        }
    }

    cout<<ans;
    




    // Please write your code here.
    return 0;
}