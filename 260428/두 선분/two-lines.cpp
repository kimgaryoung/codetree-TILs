#include <iostream>
#include<vector>

using namespace std;

int main() {

    int a,b;
    cin>>a>>b;

    int c,d;
    cin>>c>>d;

    vector<int>v1;
    vector<int>v2;

    for(int i=a; i<=b; i++)
    {
        v1.push_back(i);

    }

     for(int i=c; i<=d; i++)
    {
        v2.push_back(i);

    }


    for(int i=0; i<v1.size(); i++)
    {
        for(int j=0; j<v2.size(); j++)
        {
            if(v1[i]==v2[j])
            {
                cout<<"intersecting";
                return 0;
            }
        }
    }

    cout<<"nonintersecting";



    

    // Please write your code here.
    return 0;
}