#include <iostream>
#include<string>
#include<algorithm>
using namespace std;



class tot
{

    public:

        string s;
        int g1 ,g2 ,g3;

    tot(){};
    tot(string s, int g1, int g2, int g3)
    {
        this -> s =s;
        this -> g1=g1;
        this -> g2 =g2;
        this -> g3 =g3;
    }





};

bool cmp (const tot &a, const tot &b)
{
    return (a.g1 + a.g2 + a.g3)< (b.g1 + b.g2 + b.g3);
}

int main() {

    int n; 
    cin>>n;


    tot arr[10];

    for(int i=0; i<n; i++)
    {
        string s;
        int g1,g2,g3;
        cin>>s>>g1>>g2>>g3;
        arr[i]=tot(s,g1,g2,g3);
    }

    sort(arr, arr+n ,cmp);


    for(int i=0; i<n; i++)
    {
        cout<<arr[i].s<<" "<<arr[i].g1<<" "<<arr[i].g2<<" "<<arr[i].g3<<"\n";
    }


    // Please write your code here.
    return 0;
}