#include <iostream>
#include <string>

using namespace std;

class solve{

    public:
    string unlock_code;
    char wire_color;
    int seconds;


    solve(string unlock_code, char wire_color, int seconds)
    {
        this  ->unlock_code= unlock_code;
        this  -> wire_color=wire_color;
        this  -> seconds=seconds;
    }

   

    void print()
    {
        cout<<"code : "<<unlock_code<<"\n";
        cout<<"color : "<<wire_color <<"\n";
        cout<<"second : "<<seconds;
    }

    solve(){};
    };



int main() {


     string unlock_code;
    char wire_color;
    int seconds;
    
    cin >> unlock_code >> wire_color >> seconds;

    solve s=solve(unlock_code,wire_color,seconds);
   

    
    s.print();
   

    return 0;
}