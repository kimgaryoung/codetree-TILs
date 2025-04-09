#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int m,n,k;
    cin>>n>>k>>m;
    
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

    }

    int ans=-1;

    for(int i=0; i<n; i++)
    {
        if(stu[i]<=0)
        {
            ans=i+1;
            break;
        }
    }

    cout<<ans;



    return 0;
}