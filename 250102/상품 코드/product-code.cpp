#include <iostream>
#include <string>

using namespace std;

class Code {
    public:
    string product_name;
    int product_code;

    Code(product_name="codetree",product_code=50)
    {
        this->product_name =product_name;
        this ->product_code =product_code;

    }

    Code(){}

    void print()
    {
        cout<<"product "<<product_code<<" is "<<product_name;
    }

    

};




int main() {

    string product_name;
    int product_code;
    Code c;
    c.print();
    cin >> product_name >> product_code;

    Code(product_name, product_code);

    c.print();

   
}