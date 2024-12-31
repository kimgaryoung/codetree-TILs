#include <iostream>
#include<string>
using namespace std;

class Zzs{

    public:
    string code;
    char point;
    int time;

    Zzs(string code,char point, int time)
    {
        this -> code =code;
        this -> point =point;
        this -> time =time;
    }

    void print()
    {
        cout<<"secret code : "<<code<<"\n";
        cout<<"meeting point : "<<point<<"\n";
        cout<<"time : "<<time;
    }
    

};

int main() {
    
    string a;
    char b;
    int c;

    cin>>a>>b>>c;

    Zzs c1 =Zzs(a,b,c);

    c1.print();


   

    return 0;
}