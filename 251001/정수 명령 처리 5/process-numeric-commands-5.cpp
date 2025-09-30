#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {

    int n;
    cin>>n;

    vector<int>v;

    string s;
    int m;


    for(int i=0; i<n; i++)
    {
        cin>>s;

        if(s=="push_back")
        {
            cin>>m;
            v.push_back(m);

        }
        else if(s=="get")
        {
            cin>>m;
            cout<<v[m-1]<<"\n";

        }
        else if(s=="size")
        {
            cout<<v.size()<<"\n";
            
        }
        else if(s=="pop_back")
        {
            v.pop_back();
            
        }


        
    }
    // Please write your code here.
    return 0;
}