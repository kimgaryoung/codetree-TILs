#include <iostream>
#include<string>
using namespace std;

void pail(string str)
{
   
    string tmp;
    for(int i=0; i<str.size(); i++)
    {
        tmp[i]=str[str.size()-1-i];

    }

    int k=0;

    for(int j=0; j<str.size(); j++)
    {
        if(tmp[j]==str[j])
        {
            k++;
        }
    }
    


    if(k==int(str.size()))
    {
        cout<<"Yes";

    }
    else
    {
        cout<<"No";
    }
    

}


int main() {
    // 여기에 코드를 작성해주세요.

    string s;
    cin>>s;

    pail(s);



    return 0;
}