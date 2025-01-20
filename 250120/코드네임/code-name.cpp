#include <iostream>


using namespace std;

class grade{

    public:
        char c;
        int n;

        grade(char c, int n)
        {
            this ->c=c;
            this ->n=n;
        }
        grade(){}
    
};


int main() {
    // Please write your code here.

    grade g1[5];
    for(int i=0; i<5; i++)
    {
        char c;
        int n;
        cin>>c>>n;
        g1[i]=grade(c,n);
    }

    

    int min=0;
    for(int i=1; i<5; i++)
    {
        if(g1[min].n>g1[i].n)
            min =i;
    }

    cout<<g1[min].c<<" "<<g1[min].n;

  

    return 0;
}
