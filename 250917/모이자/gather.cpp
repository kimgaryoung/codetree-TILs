#include <iostream>
#include<cstdlib>
#include<algorithm>
#include<climits>

using namespace std;

int main() {
    // Please write your code here.

    int N; 
    cin>>N;

    int arr[100]={};

    int sum_val=INT_MAX;

    for(int i=0; i<N; i++)
    {
        cin>>arr[i];

    }

    for(int i=0; i<N; i++)
    {
        int diff=0;
        for(int j=0; j<N; j++){

            diff+=arr[j]*abs(i-j);
            //sum_val=min(diff,sum_val);
            //cout<<"diff="<<diff<<"\n";
        }
        //cout<<"diff="<<diff<<"\n";
        sum_val=min(sum_val,diff);
        
    }

    cout<<sum_val;
    return 0;
}