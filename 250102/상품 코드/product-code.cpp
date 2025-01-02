#include <iostream>
#include <string>

using namespace std;

class Code {
    public:
        string product_name;
        int product_code;

    Code(string product_name="codetree", int product_code=50)
    {
        this->product_name=product_name;
        this->product_code=product_code;

    }



    void print()
    {
        cout<<"product "<<product_code<<" is "<<product_name<<"\n";
    }

    

};




int main() {

    Code c1;
    c1.print();

    string product_name;
    int product_code;
   

    cin >> product_name >> product_code;

    Code c2= Code(product_name, product_code);
   
   

    c2.print();

   
}