#include <iostream>
#include<list>
using namespace std;

int main() {

    int n;
    cin>>n;

    list<int>l;

    string s;
    int num;
    for(int i=0; i<n; i++)
    {
        
        cin>>s;

        if(s=="push_back")
        {
            cin>>num;
            l.push_back(num);
        }
        else if(s=="push_front")
        {
            cin>>num;
            l.push_front(num);
        }
        else if(s=="pop_back")
        {
            cout<<l.back()<<"\n";
            l.pop_back();
        }
        else if(s=="front")
        {
            cout<<l.front()<<"\n";
        }
        else if(s=="back")
        {
            cout<<l.back()<<"\n";
        }
        else if(s=="pop_front")
        {
            cout<<l.front()<<"\n";
            l.pop_front();
        }
        else if(s=="size")
        {
            cout<<l.size()<<"\n";
        }
        else if(s=="empty")
        {
            cout<<l.empty()<<"\n";
        }

    }
    // Please write your code here.
    return 0;
}