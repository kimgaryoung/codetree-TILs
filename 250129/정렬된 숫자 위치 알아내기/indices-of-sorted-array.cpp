#include <iostream>
#include<algorithm>

using namespace std;


class sortc
{
    public: 
        int num,order;

    sortc(int num, int order)
    {
        this -> num =num;
        this -> order =order;

    }
    sortc(){}
};

bool cmp(sortc a, sortc b)
{
    if(a.num==b.num)
    {
        return a.order<b.order;
    }
    else {
        return a.num<b.num;
    }
}

int main()
{

    int n;
    cin>>n;

    sortc crr[1000]; // 숫자정렬
    int arr[1000];//기존 숫자 
     int num,order;
     //입력
    for(int i=0; i<n; i++)
    {
       
        cin>>num;

        //order=i+1;

        crr[i]=sortc(num,i);
       
    }

    //번호 부여 
    sort(crr,crr+n,cmp);

    for(int i=0; i<n; i++)
    {
        arr[crr[i].order]=i+1;
       
    }


    //출력
    for(int j=0; j<n; j++)
    {   
        cout<<arr[j]<<" ";
        /*
        for(int i=0; i<n; i++)
        {   
          
            if(arr[j].num==crr[i].num)
            {
                cout<<crr[j].order<<" ";
            }
        }
       */
    }
        
    
    return 0;
}