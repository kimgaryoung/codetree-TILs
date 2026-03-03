#include <iostream>
#include <string>
using namespace std;

int main() {

    string s,b; 

    cin>>s;
    cin>>b;

    int cnt=0;
    for(int i=0; i<s.length(); i++)
    {
        
        if(s.substr(i,2)==b)
        {
            cnt++;
        }
    }

    cout<<cnt;
    // Please write your code here.
    return 0;
}