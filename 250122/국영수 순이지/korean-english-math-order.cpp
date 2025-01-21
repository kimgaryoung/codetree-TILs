#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

class sub
{
    public:
        string name;
        int kor;
        int eng;
        int math;
    sub(){};

    sub(string name, int kor, int eng, int math)
    {
        this -> name =name;
        this -> kor =kor;
        this -> eng =eng;
        this -> math =math;
    }



};

bool cmp (sub &a,  sub &b)
{
    if(a.kor ==b.kor)
    {
        if(a.eng ==b.eng)
        {
            return a.math > b.math;
        }
        else 
        {
            return a.eng>b.eng;
        }
    }
    else 
    {
        return a.kor>b.kor;
    }
}


int main() {


    int n;
    cin>>n;

    sub s1[10];

    for(int i=0; i<n; i++)
    {
        string name;
        int kor, eng , math;

        cin>> name >> kor >> eng>> math;

        s1[i]=sub(name, kor, eng, math);
        
    }


    sort(s1, s1+n ,cmp);


    for(int i=0; i<n; i++)
    {
        cout<< s1[i].name<<" "<<s1[i].kor<<" "<<s1[i].eng<<" "<<s1[i].math<<"\n";
    }
   
    return 0;
}