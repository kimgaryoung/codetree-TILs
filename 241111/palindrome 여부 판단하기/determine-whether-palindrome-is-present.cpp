#include <iostream>
#include<string>
using namespace std;

bool pail(string &str)
{
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]!=str[str.size()-1-i])
        {
            return false;
        }
    }
    return true;
    
}


int main() {
    // 여기에 코드를 작성해주세요.

    string s;
    cin>>s;

    pail(s);


    if(pail(s))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

    return 0;
}