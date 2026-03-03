#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {


    int n;
    cin>>n; 

    string arr[n];
    

    for (int i=0; i<n; i++)
    {

         
        cin>>arr[i];
        
    }
    char c;
    cin>>c;

   
    double num=0;
    double sum=0;

    

    for(int i=0; i<n; i++)
    {
        if(arr[i][0]==c)
        {
            num++;
            sum+=arr[i].length();

            
        }
    }

        
    

    cout<<num<<" ";
    cout<< fixed<<setprecision(2)<<sum/num;
    // Please write your code here.
    return 0;
}