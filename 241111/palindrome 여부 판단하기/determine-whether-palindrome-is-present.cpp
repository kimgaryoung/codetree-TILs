#include <iostream>
#include<string>
using namespace std;

bool pail(string str)
{
   
    string tmp;
    for(int i=0; i<str.size(); i++)
    {
        tmp[i]=str[str.size()-1-i];

    }

    int k=0;

    for(int j=0; j<tmp.size(); j++)
    {
        if(tmp[j]==str[j])
        {
            k++;
        }
    }
    


    if(k==int(str.size()))
    {
        return 1;

    }
    else
    {
        return 0;
    }
    

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