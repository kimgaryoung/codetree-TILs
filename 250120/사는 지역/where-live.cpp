#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

class tree{
    public: 
     
     string name;
     string num ;
     string re;

     
     tree(string name, string num, string re){
        this->name=name;
        this->num=num;
        this->re=re;
     }
     tree(){}

     void print()
     {
        cout<<"name "<< name<<"\n";
        cout<<"addr " << num<<"\n";
        cout<<"city "<<re;
     }
};


   

int main() {
    int n; 
    
     
    cin>>n;
    tree person[10];

    for(int i=0; i<n; i++)
    {
        string name,num,re;

        cin>>name>>num>>re;
        person[i]=tree(name,num,re);
    }

   

   int idx=0;
   for(int i=1; i<n; i++)
   {
    if(person[i].name > person[idx].name)
        idx=i;
   }

    person[idx].print();
    
    
    
   

    
    
    return 0;
}