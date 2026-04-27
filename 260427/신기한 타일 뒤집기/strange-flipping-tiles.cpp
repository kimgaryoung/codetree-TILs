#include <iostream>
#include<vector>
using namespace std;

int main() 
{

  // 런타임 에러 이유 못 밝힘.
    int n; 
    cin>> n; 

    vector<int>v;// 양
    vector<int>v_m;//음 


    int cur=0;//현재 
    int cur_m;

    for(int i=0; i<n; i++)
    {
        int input;
        char c;
        cin>>input>>c;


        for(int j=0; j<input; j++)
        {
            v.push_back(0);
            v_m.push_back(0);
            
            if(c=='L')//흰 
            {
               if(cur<0)
               {
                  cur_m=cur*(-1);

                  v_m[cur_m]=-1;
                  --cur;
               }
               else if(cur>0)
               {

                 v[cur]=-1;
                 --cur;

               }
               else
               {
                 v[0]=-2;
                 v_m[0]=-2;
                 cur=-1;


               }

            }
            else if(c=='R')// 검 
            {
                if(cur<0)
               {
                  
                  cur_m=cur*(-1);

                  v_m[cur_m]=1;
                  ++cur;
               }
               else if(cur>0)
               {
                 v[cur]=1;
                 cur++;

               }
               else
               {
                  v[0]=2;
                  v_m[0]=2;
                  cur=1;
               }

            }
          

        }


      
        }


       

        int b=0;
        int w=0;

        for(auto i : v)
        {
            if(i==-1)
            {
                w++;
            }
            else if(i==1)
            {
                b++;
            }
            

        }

        for(auto i: v_m)
        {
            if(i==-1)
            {
                w++;
            }
            else if(i==1)
            {
                b++;
                
            }

        }

        if(v[0]==2)
        {
            //b++;
        }
        else if(v[0]==-2)
        {
            w++;
        }

       cout<<w<<" "<<b;

    
    
    // Please write your code here.
    return 0;
}

