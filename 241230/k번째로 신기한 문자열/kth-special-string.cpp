#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

bool func(string a, string b)
{

    for(int i=0; i<b.size(); i++)
    {
        if(a[i]!= b[i])
        {
            return false;
        }
    }
    return true;
}

int main() {
    int n,k;

    cin>>n>>k;

    string s;

    cin>>s;

    string arr[100];

    string str[100];
    int j=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];

        if(func(arr[i],s))
        {
            str[j]=arr[i];
            j++;
        }

    }

    sort(str,str+j);

    cout<< str[k-1];



    
    return 0;
}