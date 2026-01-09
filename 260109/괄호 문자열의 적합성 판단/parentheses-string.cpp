#include <iostream>
#include <string>
#include<stack>

using namespace std;

string str;

int main() {
    cin >> str;

    stack<char>s;

    for(int i=str.length()-1; i>=0; i--)
    {
        //cout<<str[i];
        s.push(str[i]);
    }


    int cnt_a=0;
    int cnt_b=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s.top()=='(')
        {
            cnt_a++;
        }
        else
        {
            cnt_b++;
        }
        

    }

    if(cnt_a==cnt_b)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";

    }





    // Please write your code here.

    return 0;
}
