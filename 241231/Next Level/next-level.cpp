#include <iostream>
#include<string>
using namespace std;

class Next{

    public:
        string user;
        int lv;
    Next(string user="codetree", int lv=10)
    {
        this -> user =user;
        this -> lv =lv;

    }

    void print()
    {
        cout<<"user "<<user<<" "<<"lv "<<lv<<"\n";
    }
    
};

int main() {

    Next n1;
    n1.print();

    string a;
    int b;
    cin>>a>>b;

    Next n2=Next(a,b);
    n2.print();
   
    return 0;
}