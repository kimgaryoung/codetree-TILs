#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m,n,k;
    cin>>n>>k>>m;
    
    int ans=-1;
    int stu[n];
    for(int i=0; i<n; i++)
    {
        stu[i]=m;
    }

    int tmp;
    for(int i=0; i<k; i++)
    {
        cin>>tmp;

           
        stu[tmp-1]--;
      


      if (stu[tmp-1]<=0)
      {
        ans=tmp;
        break;
      }

    }

    

    cout<<ans;



    return 0;
}