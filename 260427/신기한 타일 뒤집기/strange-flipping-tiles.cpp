#include <iostream>
#include<vector>
using namespace std;

int main() 
{

  // 런타임 에러 이유 못 밝힘.
  //   계속 블랙이 1개 많게 나옴 
    int n; 
    cin>> n; 

    vector<int>v;// 양
    vector<int>v_m;//음 

     v.push_back(0);
     v_m.push_back(0);


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

    if(c=='L')
    {
        if(cur >= 0) v[cur] = -1;
        else v_m[-cur] = -1;

        cur--;
    }
    else if(c=='R')
    {
        if(cur >= 0) v[cur] = 1;
        else v_m[-cur] = 1;

        cur++;
    }
}

// 명령 끝난 뒤 위치 보정
if(c == 'L') cur++;
else if(c == 'R') cur--;
             

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

       

       cout<<w<<" "<<b;

    
    
    // Please write your code here.
    return 0;
}

