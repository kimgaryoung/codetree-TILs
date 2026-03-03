#include <iostream>
#include<string>
using namespace std;

int main() {
    // Please write your code here.

    string s; 

    for(int i=0; i<2; i++)
    {
        string tmp;
        getline(cin,tmp);

        s+=tmp;
    }

    int n=s.length();

    for(int i=0; i<n; i++)
    {
        if(s[i]!=' ')
        {
            cout<<s[i];
        }
    }
    
    

    return 0;
}