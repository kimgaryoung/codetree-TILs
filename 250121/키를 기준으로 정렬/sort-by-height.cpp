#include <iostream>
#include<algorithm>
#include<string>
using namespace std;


class Key{

public:

    string name;
    int h;
    int w;

    Key(string name, int h, int w)
    {
        this -> name =name;
        this -> w =w;
        this -> h =h;

    }
    Key(){};


};

bool cmp (Key &k1, Key &k2)
{  
    return k1.h<k2.h;

}


int main() {
    
    int n;  


    cin>>n;

    Key k[10];

    for(int i=0; i<n; i++)
    {
        string name;
        int h;
        int w;

        cin>> name >> h >> w;

        k[i]=Key(name, h,w);
    }

    sort(k, k+n,cmp);

   for(int i=0; i<n; i++)
   {
     cout<<k[i].name<<" "<< k[i].h<<" "<<k[i].w<<"\n";
   }

    return 0;
}