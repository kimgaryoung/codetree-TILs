#include <iostream>
#include<list>
#include<string>
using namespace std;

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    list<char>l;

    for(int i=0; i<s.length(); i++)
    {
        l.push_back(s[i]);

    }

    list<char>::iterator it;
    it=l.end();

    char r;
    char c;
    for(int i=0; i<m; i++)
    {
        cin>>r;

        if(r=='L')//앞
        {
            if(it != l.begin())
            {
                it--;
            }
        }
        else if(r=='P')//추가
        {
            cin>>c;
            l.insert(it,c);
        }
        else if(r=='D') // 제거
        {
            if(it!=l.end()){
            it=l.erase(it);
            }
        }
        else if(r=='R')//뒤 
        {
            if(it !=l.end())
            {
                it++;
            }

        }
    }


        for(it=l.begin(); it !=l.end(); it++)
        {
            cout<<*it;
        }
    
    
    return 0;
}